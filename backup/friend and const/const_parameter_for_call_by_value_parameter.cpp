#include <iostream>
using namespace std;

void fun(const int h, const double& y){
    cout<<h<<"  "<<y<<endl;
   /* h=2*h;
    y=y;
    
    read only.
    cannot be assigned value
    even y=y;
    
    error
    
    
    */
}
int main(){
    int t=10;
    double j=121.2;
    fun(t,j);
    return 0;


}
