#include <iostream>
using namespace std;
enum season {spring, summer, fall=10, winter};//from 0
//there is no equal sign after season
// default value of spring is 0
// the next item value is the prior one plus one;
// so in this case, winter =11;
// it can be as int value, and used in switch case syntax

int main(){
    int i=11;
    switch (i) {
        case spring:
            cout<<"spring"<<spring<<endl;
            break;
        case winter:
            cout<<"winter"<<winter<<endl;
            break;
        default:
            cout<<summer<<endl;
            break;
    }

    return 0;

}