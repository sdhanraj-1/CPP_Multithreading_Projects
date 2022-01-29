#include <thread>
#include <stdio.h>   /*standard I/O routines*/
/* This set of functions details how one can use the C++ standard
threading features available. 
#include <thread>  is needed for this

*/
void do_loop(int data){
    for (int i = 0; i < 5; ++i) {
        std::cout << "Thread Do LOOP executing\n";
        ++data;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}

//example of functors
class Base{
public: 
    void operator()(int x){
        while(x-- >0) {
            std::cout<<x<<std::endl; 
        }
    }   

    void run(int x){
        while(x-- >0) {
            std::cout<<x<<std::endl; 
        }

    }   

    static void run2(int x){
        while(x-- >0)
            std::cout<<x<<std::endl; 
    }

}; 



