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
    },10); 

    std::thread t3((Base()),10); //passing the functors




    t1.join(); 
    fun.join();
    t3.join();
    //std::thread ThreadOne(do_loop,thr_id2); 
}
