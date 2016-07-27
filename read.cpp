#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream file_in;
    
    while(true){
        file_in.open("qinnan.dat");
        string content;
        getline(file_in,content);
        cout<<content<<endl;
        file_in.close();
        
    }
}