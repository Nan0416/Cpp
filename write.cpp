#include <fstream>
#include <iostream>
using namespace std;
int main(){
    ofstream file_out;
    while(true){
        file_out.open("qinnan.dat",ios::app);
        cout<<"enter :";
        string content;
        cin>>content;
        file_out<<content;
        file_out.close();
    }
    return 0;

}