#include <iostream>
using namespace std;

class Cons{
private:
    int h;
    
public:
    Cons fun1(Cons y);
    void fun2(const Cons y);
    // const only constrict to member properties,
    // you can change the value of w. but not h
    
    void seth(int d);
    int geth() const;//must contain const
    
    
};

int main(){
    Cons e;
    e.seth(12);
    e.fun2(e);
    return 0;
    
}

Cons Cons::fun1(Cons y){
    y.seth(10);
    
    return y;
}
void Cons::fun2(const Cons y){// because y is a Cons type with const
                                // so the geth() must also have const
    
    cout<<y.geth()<<endl;
    
}
int Cons::geth() const{
    return h;
    
}
void Cons::seth(int w) {
    h=w;
}

/*  --- BTW ---- */

/*void  outside_class_function() const{
 
 non-member function cannot have 'const' qualifier
 
 }*/