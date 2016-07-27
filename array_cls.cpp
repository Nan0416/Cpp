#include <iostream>
using namespace std;
ostream& operator << (ostream& out, char c[]){
    out<<&c;
    return out;
}
int foo(int a[][11]){
    return a[2][2];
}
int foo(int a[][12]){
    
    return 9;
}


int main(){
    char e[]={'a','b','c'};
    cout<<e<<endl; //if don't overload <<, output abc
    int i=1l;
    cout<<i<<endl;
    int a[12][12];
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            a[i][j]=i*j;
        }
    }
    cout<<foo(a);
    return 0;


}
