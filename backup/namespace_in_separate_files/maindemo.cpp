#include <iostream>
#include "Example.h"
void reverse();
int main(){
    example::Example p;
    p.set(10);
    std::cout<<p.get()<<std::endl;
    std::cout<<p<<std::endl;
    reverse();
    return 0;


}
void reverse(){
    std::cout<<"outside"<<std::endl;

}

