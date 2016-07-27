#include <iostream>
#include <cstdlib>
#include <string>
#include "zipdigit.h"//code to bar
#include "zipcode.h"//bar to code
using namespace std;
int main(){
    cout<<"Zip bar or Zip code(b/c): "<<endl;
    string h;
    cin>>h;
    if(h=="b"){
        string bar;
        cout<<"enter bar "<<endl;
        cin>>bar;
        ZipCode test1(bar);
        test1.output();
        
    }else if(h=="c"){
        string code;
        cout<<"enter code "<<endl;
        cin>>code;
        
        ZipDigit test2(code);
        cout<<test2.get_digitStr()<<endl;
    }else{
        cout<<"error"<<endl;
        exit(1);
    }
    
    return 0;
    
}