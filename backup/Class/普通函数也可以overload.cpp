#include <iostream>
#include <cmath>
#include <ctime>
#include <fstream>
using namespace std;
class qin{
    
    public:
    void print();
    private:
    int h;
    double t;
};
void hhh(qin h);
void hhh(int h);
void hh(ofstream file);
int main(){
    qin nan;
    nan.print();
    qin w;
    w=nan;
    w.print();
    hhh(w);
    hhh(10);
   // ofstream p;
 //   hh(p);
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
void hhh(int n)
{
    cout<<n<<endl;
}

/*void hh(ofstream file)
{
    file.open("/Users/hatakusunoki/Desktop/edddd.txt");
    file<<"hhhhhh";
    file.close();
}
*/
