#include <stdlib.h>

class parsefactory{
    virtual void parse(); 
};

class htmlparse : parsefactory{


};

class txtparse : parsefactory{


};

class pptParse : parsefactory{


};

class wordParse : parsefactory{


};



class statistics{ 
    private: 
    double avg_length; 
    double long_word; 
    double short_word;

    public: 
    statistics(){

    }

    ~statistics(){

    }

}; 

