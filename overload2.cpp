#include <iostream>

using namespace std;

void h(int i);
void h(int i,double y);//difference
void h(double y,int i);
//void h(int i, string j="10");

int main(){
    h(10);
    h(10,12.0);
    h(12.0,11);
    h(10);
    

}


void h(int i){
              cout<<"int i"<<endl;
              }
void h(int i,double y){
    cout<<"int double"<<endl;
    }
void h(double y,int i){
    cout<<" double int"<<endl;
}
//void h(int i, string j="10"){
  //  cout<<" i string"<<endl;
//}


