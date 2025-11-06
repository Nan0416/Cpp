#include <iostream>
#include <string>
class Con{
private:
    std::string* str;
public:
    /* default constructor */
    Con();
    /* defined constructor */
    Con(const char* a);
    /* copy constructor */
    Con(const Con&);
    /* copy assignment */
    Con& operator = (const Con&);
    /* move constructor */
    Con(Con&&);
    /* move assignment */
    Con& operator = (Con&&);
    /* deconstructor */
    ~Con();
    
    void setstr(std::string str_);
    std::string* getstr() const;

};

int main(){
    /* call default constructor */
    Con str1;
    std::string temp="hello";
    str1.setstr(temp);
    std::cout<<"str1 "<<str1.getstr()<<std::endl;
    /* call copy constructor */
    Con str2=str1;
    std::cout<<"str2 "<<str2.getstr()<<std::endl;
    /* call default constructor */
    Con str3;
    /* call copy assignment */
    str3=str1;
    std::cout<<"str3 "<<str3.getstr()<<std::endl;
    /* call move constructor */
    Con str4 = Con("hello"); // Con("hello") will call defined constructor
    std::cout<<"str4 "<<str4.getstr()<<std::endl;
    /* call default constructor */
    Con str5;
    /* call move assignment */
    /*
     without move constructo, it will call copy assignment
     */
    str5=Con("hello");
    std::cout<<"str5 "<<str5.getstr()<<std::endl;
    
    return 0;
}
/* default constructor */
Con::Con(){
    str=new std::string;
    std::cout<<"default constructor"<<std::endl;
}
/* defined constructor */
Con::Con(const char* a){
    std::cout<<"defined constructor"<<std::endl;
    str=new std::string;
    for(int i=0;a[i]!='\0';i++){
        str += a[i];
    }
    //delete [] a;

}
/* copy constructor */
Con::Con(const Con& con_){
    std::cout<<"copy constructor"<<std::endl;
    str=new std::string;
    *str= *con_.str;
}
/* copy assignment */
Con& Con::operator = (const Con& con_){
    std::cout<<"copy assignment"<<std::endl;
    str=new std::string;
    *str= *con_.str;
    return *this;
}
Con::~Con(){
    std::cout<<"deleted"<<std::endl;
    delete str;

}
void Con::setstr(std::string str_){
    str=new std::string;
    *str=str_;
}
std::string* Con::getstr() const{
    return str;
}
Con& Con::operator = (Con&& con_){
    std::cout<<"move assignment"<<std::endl;
    //str=con_.str;
    /*str=new std::string;
    str= *con_.str;*/
    std::cout<<"old "<<con_.str<<" value "<<*con_.str<<std::endl;
    str=new std::string;
    std::cout<<"new "<<str<<std::endl;
    *str= *con_.str;
    std::cout<<"value "<<*str<<std::endl;
    
    return *this; 
    /*
     
     the difference between move and copy
     
     */

}
Con::Con(Con&& con_){
    std::cout<<"move constructor"<<std::endl;
    str=new std::string;
    *str= *con_.str;
    
}
