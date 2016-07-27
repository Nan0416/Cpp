#include "template.h"
template <class Any>
void swap(Any& para1,Any& para2){
    /*
     
     most conpiler don't support separate the function definition and declaration, including g++
     
     */
    
    Any* temp;
    temp=new Any;
    *temp=para1;
    para1=para2;
    para2=*temp;
    delete temp;
    
}