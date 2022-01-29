# CPP_Multithreading_Projects
Experimental projects exploring C++ multi-threading for learning purposes


Key Take Aways: 
- std::thread creates an object using a move operations to copy the argumenets. 
- Copy Elison: 
    This is an optimization where objects are constructed directly into storage where they would otherwise be copied/moved to. 
- Creating std::thread object associate it with the thread of execution and it starts immediately. 
- C++ Threads are not copy Constructible or COpy Assignable but they are move constructible and move assignable. 
Copy constructible: specifies if type e can be copy-constructed from lvalue
Move Constructible: specifies that the type can be constructed from rvalue argument. (example T u = rv. Value of u is equivalent to value of rv before initialization but new value of rv is unspecified)
- That is, arguments that are passed into threads are moved into the new thread and terminated from memory. 
- Threads are light weight processes: they share memory but have seperate sequences of execution. Threads actually run inside a process. processes achieve parallelism via multiple threads
- Created threads must be joined with the main thread
- Syntax for lambda functions: 
    auto fun = [](int x){
        while ( x -- > 0){
            std::cout<<x<<std::endl; 
        }
    }; 

- Join vs Detached: 
join waits for another thread to be completed. Once a thread is started, we wait for the thread to finish.  
- Use joinable() to check if the thread is joinable before joining or detaching
- You need ot either detach or join any threads that are there because the destructor of a thread will check if it is joinable and then terminate the program if it is still

Things learned: 
