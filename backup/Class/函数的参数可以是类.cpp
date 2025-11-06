#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
class qin{
    
    public:
    void print();
    private:
    int h;
    double t;
};
void hhh(qin h);
int main(){
    qin nan;
    nan.print();
    qin w;
    w=nan;
    w.print();
    hhh(w);
    return 0;
    
}
void qin::print()
{
    cout<<"qin class"<<endl;
    
    
}
void hhh(qin h)
{
    h.print();
}

