#include <iostream>
#include <string>
using namespace std;
/*
int operator - (double h, int t);
int operator - (int h,double t);

 
 - not only binary operator, but also unary operator   like -y mean change y's sign
 
 
int operator - (int h);
 
 overload operator must include class
*/

char operator - (int h, string t);// return t[h]
int operator - (string h); //return length
int main(){
    string w="test_123_er";
    char r=3-w; //parameters beside operator
    int h= -w; //parameter after operator
    cout<<r<<"  "<<h<<endl;
    return 0;
}
char operator - (int h, string t){
    return t[h];
}

int operator -(string h){
    return h.length();

}