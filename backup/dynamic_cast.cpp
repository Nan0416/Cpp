#include <iostream>
using namespace std;
class Base{
public:
    void out(){
        cout<<"Base"<<endl;
    }
};
class Child:public Base{
public:
    void out(){
        cout<<"Child"<<endl;
    }
    void out2(){
        cout<<"Child2"<<endl;
    }
};
int main(){
    Child* c=new Child();
    c->out();
    c->out2();
    Base* b=c;
    b->out();
    //b->out2();
   // Child* c2=dynamic_cast<Child*>(b);
    Child* c2=(Child*)b;
    c2->out();
    c2->out2();
    Base* w=new Base();
    Child* e=(Child*)w;
    //w->out2();
    Base* o=new Child();
    o->out();
    Child* re=(Child*)o;
    re->out();
    re->out2();
    return 0;
    
    
}
