#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;
void strin(string j){
    j="jjj";


}
int main(){
    //char str[], str is a pointer
    char str[]="abc";
    string str1;
    str1=str;
    cout<<sizeof(str)<<endl;
    cout<<str1.length()<<endl;
    // to show the string is not a pointer
    cout<<"str1= "<<str1<<endl;
    strcpy(str,"rrr");
    cout<<"str1= "<<str1<<endl;
    str1="change k";
    cout<<"str1= "<<str1<<endl;
    string k="abs";
    cout<<k<<endl;
    strin(k);
    cout<<k<<endl;
    
    
    //switch a string to a c-string
    //char str2=str1.c_str();
    int i=sizeof(str1.c_str());
    char str2[i];
    // str2 without initialization must contain the number of element
    strcpy(str2,str1.c_str());
    cout<<str2<<endl;
    
    
    
    return 0;

}