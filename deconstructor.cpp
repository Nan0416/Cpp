#include <iostream>
using namespace std;
class error{};
class MyStr{
private:
    char* a;
    /*
        a is a c string's pointer
     
     */
    int size;
public:
    
    MyStr();
    MyStr(const char p[]);
    ~MyStr();
    int length() const;
    friend char operator ==(const MyStr& y,int posi);
    friend void operator *(MyStr& y,const char p[]);
    friend ostream& operator << (ostream& out,const MyStr& y);
   
    
};


int main(){
    MyStr str("hellp");
    cout<<(str==2)<<endl;
    cout<<str<<endl;
    str*"nq";
    cout<<str<<endl<<"lenght  "<<str.length()<<endl;
    cout<<"======"<<endl;
    
}

MyStr::MyStr(){
    a =new char[1];
}
MyStr::MyStr(const char p[]){
   
    int h=0;
    for(int i=0;p[i]!='\0';i++){h++;}
    size=h;
    a=new char[h+1] ;
    for(int i=0;p[i]!='\0';i++){
        a[i]=p[i];
    }
    a[h]='\0';

}
MyStr::~MyStr(){
    
    cout<<"killed "<<endl;
    
    delete [] a;
}

int MyStr::length() const{
    return size;
}

char operator ==(const MyStr& y,int posi) {
    try {
        if(posi>y.size){
            throw error();// throw instance
        }
        
        return y.a[posi];

    }catch (error) {   // catch type
        cout<<"oversize"<<endl;
        return -1;
    
    
    }
   
    
}

void operator * (MyStr& y,const char p[]){
    
    
    //y=MyStr(a);  is meaning to create a new MyStr
    
    // will open a new memory, not to replace the existing freestore memory
    
    int h=0;
    for(int i=0;p[i]!='\0';i++){h++;}
    y.size=h;
    delete [] y.a;
    //delete [] y.a;
    // delete old a[] to open new a[] with new size;
    cout<<y.a<<endl;
    // the more important thing is this way not target deconstructor;
    y.a=new char[h+1] ;
    for(int i=0;p[i]!='\0';i++){
        y.a[i]=p[i];
    }
    y.a[h]='\0';
    
    /*
     
     close very important
     
     
     */
}
ostream& operator << (ostream& out,const MyStr& y){
    out<<y.a;
    //output char a[] is the content of a, not address
    return out;

}














