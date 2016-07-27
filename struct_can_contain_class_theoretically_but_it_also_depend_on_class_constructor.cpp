#include <iostream>
#include <fstream>
using namespace std;
class qin{
public:
    int j;

};
typedef struct node{
    string name;
    int age;
   //ifstream jj;
    //ifstream has a private constructor
    qin h;
    //node * next;
    //node p;
}node;


int main(){
    ifstream file_in;
    file_in.open("jj.txt");
    fstream file_in_2;
   // file_in_2=file_in;      error
    string k("qinnan");
    string j;
    j=k;    //string overload the equal sign =
    cout<<j<<endl;
    
    
    
    qin j_;
    //ifstream file_in;
    node person={j,21,j_};
  /* //person2=person; //assign is ok  you can think string, string is a class
    p=&person;
  //  p=new node("qinnan",12);
    node * p2;
    p2=new node;
    p2->name="qinnna";
    node * p3;
   //p3=new node("qinnan",22);    //this form is for class initialization or basic type
    int * t;
    t=new int(12);
    cout<<person.name<<"  "<<person.age<<endl;
    cout<<p->name<<endl;
    cout<<p2->name<<endl;*/
    return 0;
    
    
    
}