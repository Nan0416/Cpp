#include <iostream>
using namespace std;
typedef struct node{
    int h;
    double t;

}node;
/*void operator << (ostream& out, node j){
    out<<"============"<<endl<<j.h<<endl<<j.t<<endl<<"============="<<endl;

    if not return a value,
    node e
    cout<<e, it is good
    however
    node t
    cout<<e<<t will be a error
    is like
    1. cout<<e return void and output e
    2. (void)<<t is false
 
    however if return out
    1. cout<<e return cout and output 2
    2. (cout)<<t is also good
 
 
 
}*/

ostream& operator << (ostream& out, const node j){
    out<<"============"<<endl<<j.h<<endl<<j.t<<endl<<"============="<<endl;
    return out;
    
}
/*
 
 if you want to ganrantee the continue to use the operator like not only 1+1 but 1+1+1+1
 you must make sure 1+1 return int to satisfy the demand of + operator
 
 */
int main(){
    node e;
    e.h=3;
    e.t=12.3;
    node t;
    t.h=12;
    t.t=-23.32;
    
    cout<<e<<t;
    return 0;

}