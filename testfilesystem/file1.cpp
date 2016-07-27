#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main(){
    ofstream file_in;
    file_in.open("h.txt");
    if(file_in.fail()){
        exit(1);
    }
    string h;
    while(h!="h"){
        cin>>h;
        file_in<<h;
    }
    //cin>>file_in;
    cout<<"success"<<endl;
    file_in.close();
    return 0;
}