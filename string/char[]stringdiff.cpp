#include <iostream>
#include <cmath>
#include <string> //the class string is in the class
// char b[]={'a','c','d'};
//why cout<<b<<endl; output acd rather than the address of b
using namespace std;
void change_b(char b[]){
    b[0]='q';

}
int main(){
    char a[]={'a','b','c'};
    //cout<<a  output content
    //function parameter is as reference
    
    char b[]="abc";
    //cout<<b  output content
    //function parameter is as reference
    
    
    int c[]={1,2,3};
    //cout<<c  output address
    //function parameter is as reference
    
    string d="abc";
    //cout<<d  output content
    //function parameter is not as reference
    //it contain a '\0'
    string e;
    e=b;
    //it is independent to b
    //convert a char[] to a string variable
    int i=d.length();
    char f[i];
    strcpy(f,d.c_str());
    //convert a string to a char[]
    //strcpy and some function only take the parameter as char f[]
    string g("abc");
    //constructor
    //string is a class
    char h[10];
    cin.getline(h,10);
    //only accept 9 digit, the last only is \0
    cout<<"a = "<<a<<endl;
    cout<<"a1 = "<<a[1]<<endl;
    cout<<"address of a0 "<<&a<<endl;
    cout<<"address of a1 "<<&a+1<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"b1 = "<<b[1]<<endl;
    cout<<"size b "<<sizeof(b)<<endl;
    change_b(b);
    cout<<"after change b = "<<b<<endl;
    cout<<"output b length without \0"<<strlen(b)<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"size d "<<sizeof(d)<<endl;
    // sizeof a instance of a class
    cout<<"output d length without \0 "<<d.length()<<endl;
    cout<<"e = "<<e<<endl;
    cout<<"f = "<<f<<endl;
    cout<<"g = "<<g<<endl;
    cout<<"h = "<<h<<endl;
    return 0;

}