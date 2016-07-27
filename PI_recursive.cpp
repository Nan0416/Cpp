#include <iostream>
using namespace std;
double PI(double n);
void forPI(int n);
void KeivnPI(int i,int n,double pi);
void Keivn2PI(int i,int n,double pi);
int main(){
    double h=100000;
    double pi=PI(h);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(10);
    
    cout<<4*pi<<endl;
    
    forPI(100000);
    KeivnPI(1,100000,0);
    Keivn2PI(1,100000,0);
    return 0;
}
double PI(double n){
    if (n==1){
        return 1;
    }else if((int)n%2==0){
        return -1.0/(2*n-1)+PI(n-1);
    }else{
        return 1.0/(2*n-1)+PI(n-1);
    }
}
void forPI(int n){
    double pi=0;
    for(int i=1;i<n;i++){
        if(i%2==0){
            pi=pi-1.0/(2*i-1);
        }else{
            pi=pi+1.0/(2*i-1);
        }
    }
    cout<<4*pi<<endl;
}
void KeivnPI(int i,int n,double pi){
    if(i<n){
        if(i==1){
            pi=1;
            KeivnPI(i+1,n,pi);
        }else{
            if(i%2==0){
                pi=pi-1.0/(2*i-1);
            }else{
                pi=pi+1.0/(2*i-1);
            }
            KeivnPI(i+1,n,pi);
        }
    }else{
        cout<<4*pi<<endl;
    }
}
void Keivn2PI(int i,int n,double pi){
    if(i<n){
    
            if(i%2==0){
                pi=pi-1.0/(2*i-1);
            }else{
                pi=pi+1.0/(2*i-1);
            }
            KeivnPI(i+1,n,pi);
        
    }else{
        cout<<4*pi<<endl;
    }
}