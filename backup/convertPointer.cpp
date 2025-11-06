#include <iostream>
using namespace std;
int f(int* hu){
    int u=10;
    hu=&u;
    cout<<hu<<endl;
    return u;
}
void r(int u){
    int* we=&u;
    *we=1012;
}
void r(int* u){
    *u=102;
}
int main(){
    int e=12;
    int* w=&e;
    cout<<w<<endl;
    f(w);
    cout<<w<<endl;
    int qww=100;
    cout<<qww<<endl;
    r(qww);
    cout<<qww<<endl;
    cout<<e<<endl;
    int *uer=&e;
    r(uer);
    cout<<e<<endl;  
    return 0;
}