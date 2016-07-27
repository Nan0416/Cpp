#include <iostream>
using namespace std;

int main(){
    char* a;
    a=new char[4];
    a[0]='a';
    a[1]='b';
    a[2]='c';
    a[3]='\0';
    cout<<a<<endl;
    delete [] a;
    cout<<a<<endl;
    return 0;


}