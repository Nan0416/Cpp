#include <iostream>
#include <string>
int main(){
    std::string str1("hello");// defined constructor
    std::cout<<"str1 "<<&str1<<std::endl;
    std::cout<<"str2 temp "<<(std::string("people"))<<std::endl; //str2 is a temp
    std::string str3;
    str3=std::string("human");// str3 using the move assignment
    std::string str4=std::string("animals");// move constructor
    
    return 0;
    

}