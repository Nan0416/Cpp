#include <iostream>
//#include <cstdlib>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
void foo(int n,int term,int prev);
void fooforversion(int n,int term,int prev);
int recursive(int n);
int main(){
    foo(9,1,1);// the last is an unimportant value, not the inside function call is vital
    //cout<<endl;
    //recursive(9);
    cout<<"\b"<<endl;
}
void foo(int n, int term, int prev) {
    if (term <= n) {
        if (term == 1) {
            std::cout << "1";
            foo(n, 2, 1);
        }
        else {
            std::cout << ", ";
            int add = (term / 2) * ((term + 1) % 2);
            int mult = pow((term / 2), (term % 2));
            int val = (prev + add) * mult;
            std::cout << val;
            foo(n, term+1, val);
        }
    }
    return;
}

void fooforversion(int n,int term,int prev){
    int temp=0;
    cout<<1<<", ";
    prev=1;
    for(term=2;term<=n;term++){
        prev=(prev+(term/2*((term+1)%2)))*pow((term/2),term%2);
       // prev=prev+(term/2*((term+1)%2)))*pow((term/2),term%2);
        cout<<prev<<", ";
    }
    
}
int recursive(int n){
    if(n!=1){
        double i=n/2.0;
        int j=n/2;
        int temp=0;
        if(i==j){
            temp=recursive(n-1)+j;
        }else{
            temp=recursive(n-1)*(j);
        }
        cout<<temp<<", ";
        return temp;
    }else{
        cout<<1<<", ";
        return 1;
    }
}