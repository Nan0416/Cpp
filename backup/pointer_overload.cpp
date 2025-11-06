#include <iostream>
#include <iomanip>
using namespace std;
void f(int* p){
    cout<<p<<endl;

}
void f(int p){
    cout<<p<<endl;

}

int main(){
   /* cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(10);
    cout<<12.34<<endl;
    */
    cout<<12;
    int *p;
    int i=10;
    p=&i;
    
    f(*p);//*p is int not address
    cout.setf(ios::right);
    cout.width(5);
    cout<<12<<endl;
    cout<<sizeof(short)<<endl;
    
    cout<<"12"<<setw(5)<<setfill(' ')<<12<<endl;
    return 0;
}