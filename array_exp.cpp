#include <iostream>
#include <string>
using namespace std;
int main(){
    string* s;
    //for(;true;){
        s= new string("hello");//}
    
    cout<<(*s).length()<<endl;
    
    int a[10]; //a[10] after declare it will clear the 10 int variable as 0
    int* p=a;
    cout<<a[0]<<"  "<<p[0]<<endl;
    cout<<a[3]<<"  "<<p[3]<<endl;
    cout<<a[12]<<"  "<<p[12]<<endl;
    
    
    double d=12.3;
    double* pd =&d;
    cout<< * pd<<endl;
    cout<< pd[0]<<"  "<<pd[2]<<endl; // [] is a operator to get the index as n element
    
    int* ip;
    int size;
    cout<<"enter size: ";
    cin>>size;
    ip=new int[size];
    
    double* array[10];
    double** pad;
    pad=array;
    
    array[1]=&d;
    array[2]=new double[10];
    *(array[2]+3)=1233.3;
    cout<<array[1]<<"  "<<pad[1]<<"  "<<pad[2][3]<<endl;
    cout<<pad<<endl;
    
    delete [] ip;
    delete [] *array;
    cout<<array[1]<<"  "<<pad[1]<<"  "<<pad[2][3]<<endl;
    return 0;
    



}