#include <iostream>
using namespace std;

class Qin{
public:
    Qin();
    Qin(int p);
    Qin(int P,int h);
    void qin();
    void print();
private:
    int h;
};
class Nan{
public:
    Nan();
    void print();
private:
    int h;
};
Qin func(int g){ // 返回值为Qin类型的function 没有实际用途，因为 在使用 此函数时，需要一个Qin类型的varible receive 这个
    //return value,  而你没法确定你要declare 这个变量用哪一个constructor，因为你无法知道Qin返回的那个数的constructor是用的哪一个
    //所以只有constructor唯一时才能用这样的function which returns a type of class
    //  ----!!!  以上的说法是错误的， 在declare Qin的varible 的时候随便，因为之后其会被改写。
    Qin nan(222);
    cout<<"func  "<<g<<endl;
    return nan;

}

Nan func1(int g){
    Nan nan;
    cout<<"func  "<<g<<endl;
    return nan;
    
}

/*
    C++ 不完美
    
    例如，定义一个C++ 的类 叫做  Qin， 
    现在declare 一个Qin的对象 func 如下
    Qin func；
 
    之后定义一个 返回Qin对象类型的值的函数名为 func
    Qin func(){
        ...
    }
 
    实际是可以区分的，因为 要用func 函数 需要带有（）而使用 func 这个对象 最多就是在declare的时候加（），而在
 
    declare时， func对象的前面必有 Qin，而func 函数使用是前面没有Qin 又可以区分开。
 
 
 
 
 
 
 */
int main(){
    //Qin func;//declare a Qin type class //not to use function();
  //  func.print();
    //
    
    Qin n(67,23);
    n.print();
    n=func;
    n=func(112121);//use function
    
    n.print();
    //
    Nan yy;
    Nan yyy;
    yyy.print();
    yy=func1(111);
    yy.print();
    return 0;
}

Qin::Qin():h(1){
}
Qin::Qin(int p){
    h=p;
}
Qin::Qin(int P,int h):h(P*h){
}
void Qin::qin(){
    h=0;
}
void Qin::print(){
    cout<<h<<endl;
}
void Nan::print(){
    cout<<h<<endl;
}
Nan::Nan():h(199){
}
