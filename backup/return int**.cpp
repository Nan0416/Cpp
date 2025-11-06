#include <iostream>
using namespace std;
int** fun(){
    int** array;
    array= new int*[3];
    array[2]=new int[3];
    array[2][2]=19;
    return array;

}
int main(){
    int** a;
    a=fun();
    cout<<a[2][2]<<endl;
    return 0;

}