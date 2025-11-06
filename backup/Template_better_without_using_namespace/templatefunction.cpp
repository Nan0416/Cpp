#include <iostream>
#include "Copy.h"
//using namespace std;
template <class Any>

/*
 
 ATTENTION:
 using namespace should trigger ambiougous
 so if you want to use, therefore use it in all files.
 
 
 */

//void swap(Any& para1,Any& para2);
void swap(Any& para1,Any& para2){
    /*
     
     most conpiler don't support separate the function definition and declaration, including g++
     
     */
    
    Any* temp;
    temp=new Any;
    // you msut guarantee the type which you will use here has correct assignment operator and constructor
    *temp=para1;
    para1=para2;
    para2=*temp;
    delete temp;
    
}
int main(){
    int h=10;
    int t=12;
    std::cout<<h<<"  "<<t<<std::endl;
    swap(h,t);
    std::cout<<h<<"  "<<t<<std::endl;
    double e=12.2;
    double w=-223.2;
    std::cout<<e<<"  "<<w<<std::endl;
    swap(e,w);
    std::cout<<e<<"  "<<w<<std::endl;
   
    Copy c1(1),c2(2);
    std::cout<<c1<<std::endl;
    std::cout<<c2<<std::endl;
    swap(c1,c2);
    std::cout<<c1<<std::endl;
    std::cout<<c2<<std::endl;
    return 0;
    
}
/*void swap(Any& para1,Any& para2){

    Any temp;
    temp=para1;
    para1=para2;
    para2=temp;

}*/