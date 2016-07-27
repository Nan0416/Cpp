#include <iostream>
using namespace std;

class Cons{
private:
    int h;
    
public:
    void fun1() const;
    void fun2(int w) const;
    // const only constrict to member properties,
    // you can change the value of w. but not h
    
    void seth(int d);
    int geth();
    

};

int main(){
    Cons e;
    e.seth(12);
    cout<<e.geth()<<endl;
    e.fun1();
    cout<<e.geth()<<endl;
    e.fun2(17);
    return 0;

}


void Cons::fun1() const{
    //h=10;

}
void Cons::seth(int d){
    h=d;

}
int Cons::geth(){
    return h;

}
void Cons::fun2(int w) const{
    w++;
    cout<<w<<endl;

}

/*  --- BTW ---- */

/*void  outside_class_function() const{
 
 non-member function cannot have 'const' qualifier

}*/