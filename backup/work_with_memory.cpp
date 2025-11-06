#include <iostream>
using namespace std;
void getInput(double& len,double& wid);
void getInput1(double len,double wid);
void getInput2(double * len);
void getInput3(double * len,double * wid);
int main(){
    double a=10,b=10,c;
    getInput(a,b);
    cout<<a<<"   "<<b<<endl;
    double * p=&a,*q=&b;
    cout<<&a<<endl;
    a=10,b=10;
    getInput1(a,b);
    cout<<a<<"   "<<b<<endl;
    a=10,b=10;
    
    getInput3(p,q);
    cout<<a<<"   "<<b<<endl;
    getInput2(p);
    cout<<endl<<    a<<endl;
    return 0;
}
void getInput(double& len,double& wid){ //没人代表，直接上，就是a本身
    cout<<"len ";
    cin>>len;
    cout<<"wil "; //same memory block
    cin>>wid;
}
void getInput3(double * len,double * wid){  //len代表a的内存
    cout<<"len ";
    cin>> *len;
    cout<<"wil "; //same memory block
    cin>> *wid;
}

void getInput1(double len,double wid){  //len 代表a里的值
    cout<<"len "; //a new memory
    cin>>len;
    cout<<"wil ";
    cin>>wid;
}
void getInput2(double * len){
    cout<<"len "; //a new memory
    double * j=len;
    cout<<j<<endl;
    *j=100;      // give value to address (pointer) add * or it will be redirect address;
    //j=new double ;
    //j=1111;
    
   // len =new double;
    //cin>>*len;
    
}

