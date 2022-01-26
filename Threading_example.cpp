#include <thread>
#include <stdio.h>   /*standard I/O routines*/
/* This set of functions details how one can use the C++ standard
threading features available. 
#include <thread>  is needed for this

*/
void * do_loop(void* data){
    int i; // counter for numbers
    int j;   //counter for delay
    int me = *((int*) data); //thread identifying number

    for(i = 0; i<10; i++){
        for(j =0; j<10; j++){
            printf("'%d' - Got '%d\n'",me,i); 
        }    

    }
}

int main(int argc, char* argv[]){
    int thr_id1 = 1; 
    int thr_id2 = 2; 
    std::thread ThreadOne(do_loop,thr_id1); 
    std::thread ThreadOne(do_loop,thr_id2); 
}



