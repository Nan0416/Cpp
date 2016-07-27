#include <iostream>
#include <string>
using namespace std;
//using namespace my;
namespace my {
    

class Zoo{
public:
    virtual void eat(){
        cout<<"base"<<endl;
    }
};
class A:public Zoo{
public:
    void eat(){
        cout<<"A eat"<<endl;
    }
};

}
namespace  {
    using my::Zoo;

    class B:public Zoo{
public:
    void eat(){
        cout<<"B eat"<<endl;
    }
};
}
int main(){
    using namespace my;
    //cout<<time(0)<<endl;
    srand(time(0));
//    /srand(rand());
    for(int i=0;i<2;i++){
    for(int i=0;i<10;i++){
        cout<<rand()<<endl;}
        cout<<"===="<<endl;}
    A a;
    B b;
    my::Zoo* z[2];
    z[0]=&a;
    z[1]=&b;
    for(int i=0;i<2;i++){
        z[i]->eat();
        Zoo temp=*(z[i]);
        //A h=*z[0];
        temp.eat();// call base class
    }
    return 0;
}





















