#include <iostream>
#include <string>
using namespace std;
int main(){
    char h[10];
    cout<<"input h :";
    cin.getline(h,10);
    //only accept 9 digit, the last only is \0
    string i;
    int j;
    cout<<"input j and i ";
    cin>>j;
    getline(cin,i);
    //when entering the j and i, there should be not space or enter between them, because the extra space will be
    // taken by getline into i
    cout<<"h = "<<h<<endl;
    cout<<"i = "<<i<<endl;
    cout<<"j = "<<j<<endl;
    cout<<"at "<<j<<"i is "<<i.at(j)<<endl;
    // .at like the index, but at will check if you have input a index that greater than the index which string i
    //has
    return 0;


}