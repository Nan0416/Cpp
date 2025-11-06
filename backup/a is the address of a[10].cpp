#include <iostream>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,0}; //a is the address of a[10];
    cout<<a<<endl;
    cout<<*(a+1)<<endl;//===a[1]
    return 0;
}