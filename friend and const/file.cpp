#include <iostream>
#include <cmath>
//#include <cstdlib>
#include <climits>
#include <cstdlib>
using namespace std;
void print(string g){
    for(int length=1;length<=g.length();length+=2){
        for(int i=0;i<=g.length()-length;i++){
            cout<<g.substr(i,length)<<endl;
        }
        
    }
    

}
int main(int hwe, char** hu){
    cout<<hwe<<endl;
    string h="this is an example!";
    string y="!!!";
    cout<<h.find(y)<<endl;
}
