#include <iostream>
using namespace std;

template <class T>
struct node{
    T* content;
    node* last;
    node* next;
};

int main(){
    node<int>* h=new node<int>;
    node<int>* t=new node<int>;
    t->last=h;
    h->content=10;
    //cout<<t->last->content<<endl;
    
    

}