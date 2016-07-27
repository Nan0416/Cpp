#include <iostream>
using namespace std;
//class error{};
class MyStr{
private:
    char* a;
    int size;
public:
    MyStr();
    MyStr(const char p[]);
    ~MyStr();
    int length() const;
    friend ostream& operator << (ostream& out,const MyStr& y);
    
    // friend ostream& operator << (ostream& out,const MyStr y);
    
    // if there is call-by-value of y ,after introduce y into this function, y will be killed first kill
    
    //however after main function, the str object will result in second kill
    
    //problem is coming
    
    // because y is copied from str, there char* a value are same one.
    
    // therefore altough y is different from str, but they point to a single char a[], and after first kill
    
    //char a[] is disappeared, so second kill will report error.
    
};


int main(){
    MyStr str("hello");
    cout<<str<<endl;
    
    return 0;
    
}

MyStr::MyStr(){
    a =new char[1];
    size=1;
}
MyStr::MyStr(const char p[]){
   
    int h=0;
    for(int i=0;p[i]!='\0';i++){h++;}
    size=h;
    a=new char[h] ;
    for(int i=0;p[i]!='\0';i++){
        a[i]=p[i];
    }
    
}
MyStr::~MyStr(){
    
    cout<<"killed"<<endl;
    delete [] a;
}

int MyStr::length() const{
    return size;
}


ostream& operator << (ostream& out,const MyStr& y){
    out<<y.a<<endl; //output char a[] is the content of a, not address
    return out;
    
}















