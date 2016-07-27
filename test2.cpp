#include <iostream>
using namespace std;
int foo(int i){
    i=i+1;
    return i;
}
int main(){
    cout<<foo(1)<<endl;
}