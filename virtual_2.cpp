#include <iostream>
using namespace std;
class Base{
public:
    virtual void print(){
        cout<<"This is Base"<<endl;
    }
    void u(){
        print();
    }
};
class A:public Base{

};
class B:public Base{
    void print(){
        cout<<"This is B"<<endl;
    }
};
int main(){
    Base* u[3];
    u[0]=new Base;
    u[1]=new A;
    u[2]=new B;
    for(int i=0;i<3;i++){
        u[i]->print();
        //(*u[i]).print();
    }
    for(int i=0;i<3;i++){
       // u[i]->print();
        (*u[i]).print();
    }
    cout<<"\n---\n "<<endl;
    Base e[3];
    for(int i=0;i<3;i++){
        e[i]=*u[i];
        e[i].print();
    }
    cout<<"+++++"<<endl;
   // A* wu=new Base;
    Base* i=new A;
    B de;
    de.u();
    u[2]->u();
    //Base werr

}