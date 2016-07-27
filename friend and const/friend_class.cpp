#include <iostream>
using namespace std;


class goal;
class pullet{
private:
    int ul;
public:
    void hu(goal& j);
    void tu(goal k);
    
};


class goal{
    friend class pullet;
    // after that, all pullet's function can access the private or protected member;
private:
    double h;
    
public:
    double geth(){
        return h;
    }
    void seth(double j){
        h=j;
    }
};


int main(){
    goal t;
    t.seth(12.2);
    pullet e;
    e.hu(t);
    e.tu(t);
    return 0;
}
void pullet::hu(goal& j){
    cout<<j.h<<endl;
    j.h=2*j.h;
}
void pullet::tu(goal k){
    cout<<k.h<<endl;
}
