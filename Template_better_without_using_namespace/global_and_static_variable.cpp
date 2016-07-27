#include <iostream>
using namespace std;
int h=10;
void fun(int r,int g){
    r++;
    g++;
    cout<<"global  "<<r<<endl<<"static    "<<g<<endl;

}
void fun(){
    h++;
    //g++;
    cout<<"global  "<<h<<endl;//<<"static    "<<g<<endl;
    
}
int main(){
    static int g=10;
    fun(h,g);
    
    cout<<endl<<"global  "<<h<<endl<<"static    "<<g<<endl;
    fun();
    cout<<endl<<"global  "<<h<<endl<<"static    "<<g<<endl;
    
    return 0;


}