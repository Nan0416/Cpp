#include <iostream>
using namespace std;

//the member function become a friend function of class goal
class goal;
// there must forward declaration of goal, unless it will show you unknown type when you use
//goal in the hu of pullet
class pullet{
public:
    void hu(goal j);
    /*{
     important ---
     don't define the function in class, just declare, 
     because
     for example, you want to use the cout<<j.h<<endl;
     but at this time, compiler don't know you have h member in goal
     therefore, error
    
    }*/
};
class goal{
private:
    double h;
    friend void pullet::hu(goal j);
public:
    double geth(){
        return h;
    }
    void seth(double j){
        h=j;
    }
    friend void pullet::hu(goal j);
};
int main(){
    goal t;
    t.seth(12.2);
    pullet e;
    e.hu(t);
    return 0;
}
void pullet::hu(goal j){
    cout<<j.h<<endl;
}
