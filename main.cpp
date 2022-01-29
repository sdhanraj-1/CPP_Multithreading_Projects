#include <iostream>
#include <thread>
#include <stdio.h>   /*standard I/O routines*/
#include "Parse_file.cpp"
#include "Threading_example.cpp"

int main(int, char**) {
    int thr_id1 = 1; 
    int thr_id2 = 2; 
    std::thread t1(do_loop,thr_id1); 

    //lambda function thread creation 
    std::thread fun([](int x){
        while ( x -- > 0){
            std::cout<<x<<std::endl; 
        }
    },2); 

    std::thread t3((Base()),3); //passing the functors

    //non-static data member function
    Base b; 
    std::thread t4(&Base::run,&b,4); //generally using threads needs function handle
    //pass it the member that needs to be associated with the function
    std::thread t5(&Base::run2,5); //no need to pass object member address since static function


    // join waits for the the created thread to finish
    t1.join(); 
    fun.join();
    t3.join();
    t4.join(); 
    
    if(t5.joinable()){
        t5.join(); 
    }
    //std::thread ThreadOne(do_loop,thr_id2); 

    //looking at the detach use

    std::thread t6(do_loop,6); 
    std::cout<<"main"<<std::endl; 
    t6.detach(); 

    std::cout<<"main() after"<<std::endl;
}
