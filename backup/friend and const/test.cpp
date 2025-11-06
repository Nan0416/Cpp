#include <iostream>
using namespace std;
int main(){
    const int h=21;
    //const int* mod=&h;
    int* we=const_cast<int*>(&h);
    cout<<h<<endl;
    *we=3;
    cout<<h<<endl;
    return 0;

}