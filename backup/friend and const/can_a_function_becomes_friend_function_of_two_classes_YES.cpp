#include <iostream>
using namespace std;


class goal1;
class goal2;
/*  you cannot just predeclare class like this way,
 
 class goal1,goal2;
 
 it is false
 
 */
class pullet{
public:
    void hu(goal1 j,goal2 k);
    /*{
     important ---
     don't define the function in class, just declare,
     because
     for example, you want to use the cout<<j.h<<endl;
     but at this time, compiler don't know you have h member in goal
     therefore, error
     
     
     
     IN addition, the class that contains friend function, generally, must be above the other class,
     otherwis, because the in goal1, goal2
     
     friend void pullet::hu(goal1 j,goal2 k);
     compiler will not know pullet class has hu member function;
     
     }*/
};
class goal1{
private:
    double h;
    friend void pullet::hu(goal1 j,goal2 k);
public:
    double geth(){
        return h;
    }
    void seth(double j){
        h=j;
    }
    
};
class goal2{
private:
    int h;
    friend void pullet::hu(goal1 j,goal2 k);
public:
    int  geth(){
        return h;
    }
    void seth(int  j){
        h=j;
    }
};
int main(){
    goal1 t;
    t.seth(12.2);
    goal2 r;
    r.seth(4);
    
    pullet e;
    e.hu(t,r);
    return 0;
}
void pullet::hu(goal1 j,goal2 k){
    cout<<j.h+k.h<<endl;
}
