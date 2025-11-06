#include "Example.h"
namespace {
    /* 
     
     if this function only used by class Example, therefore, I put it in the class definition
     however 
     1. if I put it outside the namespace example, and the without namespace, 
      and as a user, I don't know this reverse has existed, so I may define my reverse() in main,
     and because it include it, therefore it will has a error
     
     
     */
void reverse();
}


namespace example{
    void Example::set(int r){
        add(r);//private member
        reverse();
        /* 
         
         unnamed namespace can be seen and only can be seen in the same file.
         if you want in other file to use it (the reverse function) you must assign a name to it,
         and declara it in the .h file.
         
         For encapsulation,  don't declare it in the .h file
         
         and you can declare reverse in namespace example
         but when you directly writing 
         using namespace example
         
         you also cannot define your own reverse function.
         */
    }
    int Example::get(){
        return h;
        
    }
    void Example::add(int r){
        h=2*r;
    }
    std::ostream& operator << (std::ostream& out, Example j){
        out<<"example "<<j.h;
        return out;
    }
}
namespace {
    

void reverse(){
    std::cout<<"inside"<<std::endl;
}
}

