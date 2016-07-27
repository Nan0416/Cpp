#include <iostream>
using namespace std;
class Copy;
typedef struct node{
    int data;
    int No;
    node * last;
    node * next;
    Copy * add;
}node;
class Copy{
private:
    
    node* base;
    int No;
    char* name;
public:
    /* constructor */
    Copy();
    Copy(int No_);
    Copy(int Np_,const char name_[]);
    Copy (node base_, int No_);
    Copy (node base_, int No_,const char name_[]);
    Copy (const Copy& site);
    ~Copy ();
    /* mutators */
    void set_base_data(int num_);
    void setNo(int num_);
    void setName(const char a[]);
    /* accessor*/
    int getnum();
    /* member functions */
    Copy* from_base_to_Copy(node* base_);
    void operator = (const Copy& site);
    
    /* friends */
    friend void set_Copy_add_to_inside_base(Copy& site);
    friend Copy* gettop(const Copy& site);
    friend int sum(const Copy* site);
    friend void connect(Copy& last_,Copy& next_);
    friend ostream& operator << (ostream& out,const Copy& site);
    friend ostream& operator << (ostream& out,const node& base);
    

};
int main(){
    
    Copy c1(0),c2(1),c3(2),c4(3);
    set_Copy_add_to_inside_base(c1);
    set_Copy_add_to_inside_base(c2);
    set_Copy_add_to_inside_base(c3);
    set_Copy_add_to_inside_base(c4);
    connect(c1,c2);
    connect(c2,c3);
    connect(c3,c4);
    c1.set_base_data(10);
    c2.set_base_data(11);
    cout<<c1<<endl<<c2<<endl<<c3<<endl<<c4<<endl;
    Copy* topadd;
   
    topadd=gettop(c3);
    
    Copy c5;
    c5=c4;
    //cout<<c4<<endl<<c5<<endl;
    //cout<<&c4<<"  "<<&c5<<endl;
    cout<<topadd<<endl;
    cout<<sum(topadd)<<endl;



}

/* constructor */
Copy::Copy(){
    base = new node;
    base->last=NULL;
    base->next=NULL;
    name=new char[0];
}
Copy::Copy(int No_){
    base=new node;
    No=No_;
    base->last=NULL;
    base->next=NULL;
    name=new char[0];
}
Copy::Copy(int No_,const char name_[]){
    base=new node;
    No=No_;
    base->last=NULL;
    base->next=NULL;
    int size_name=1;
    for(int i=0;name_[i]!='\0';i++){
        size_name++;
    }
    name=new char[size_name+1];
    for(int i=0;name_[i]!='\0';i++){
        name[i]=name_[i];
        
    }
    name[size_name]='\0';




}
Copy::Copy(node base_, int No_){
    base=new node;
    *base=base_;
    No=No_;
    base->last=NULL;
    base->next=NULL;
    name=new char[0];

}
Copy::Copy (node base_, int No_,const char name_[]){
    base=new node;
    *base=base_;
    No=No_;
    base->last=NULL;
    base->next=NULL;
    int size_name=1;
    for(int i=0;name_[i]!='\0';i++){
        size_name++;
    }
    name=new char[size_name+1];
    for(int i=0;name_[i]!='\0';i++){
        name[i]=name_[i];
    
    }
    name[size_name]='\0';


}
/* copy constructor */
Copy::Copy (const Copy& site){
    /*
        The meaning of copy constructor
        when some function take a class like Copy as a parameter, if you don't use call-by-reference,
        the function will copy the entire object including the pointers but without the speific freestore content
        And the copy is finished by default Copy constructor, and now you can redefine it. 
     
        here I will copy what the pointers point to instead of pointers themselves.
     
     */
    base = new node ;
    // the default copy construtor just
    // base=site.base; rather than new node;
    base->data=site.base->data;
    base->No=site.base->No;
    base->last=site.base->last;
    base->next=site.base->next;
    base->add=site.base->add;
    // non dynamic variable is same as the default copy constructor;
    No=site.No;
    // copy name
    int size_name=1;
    for(int i=0;site.name[i]!='\0';i++){
        size_name++;
    }
    name=new char[size_name+1];
    for(int i=0;site.name[i]!='\0';i++){
        name[i]=site.name[i];
        
    }
    name[size_name]='\0';


}
/* deconstructor */
Copy::~Copy(){
    delete base;
    delete [] name;

}
/* mutators */
void Copy::set_base_data(int num_){
    base->data=num_;

}
void Copy::setNo(int num_){
    No=num_;


}

/* accessor */
int Copy::getnum(){
    return No;
}

/* memeber function */
Copy* Copy::from_base_to_Copy(node* base_){
    return base_->add;
}

/*void Copy::operator = (const Copy& site){
    Copy(site);
    

}*/
void Copy::operator = (const Copy& site){
    
    base = new node ;
    base->data=site.base->data;
    base->No=site.base->No;
    base->last=site.base->last;
    base->next=site.base->next;
    base->add=site.base->add;
    
    No=site.No;
    int size_name=1;
    for(int i=0;site.name[i]!='\0';i++){
        size_name++;
    }
    name=new char[size_name+1];
    for(int i=0;site.name[i]!='\0';i++){
        name[i]=site.name[i];
        
    }
    name[size_name]='\0';
    
    
}


/* friends */

void set_Copy_add_to_inside_base(Copy& site){
    site.base->add=&site;
    
    
}
Copy* gettop(const Copy& site){
    node* temp;
    temp=site.base;
    while(temp->last!=NULL){
        temp=temp->last;
    }
    return temp->add;
    

}
int sum(const Copy* site){
    node* temp=site->base;
    int sum=0;
    while(temp->next!=NULL){
        sum += temp->data;
        temp=temp->next;
    }
    return sum;


}
void connect(Copy& last_,Copy& next_){
    last_.base->next=next_.base;
    next_.base->last=last_.base;

}

ostream& operator << (ostream& out,const Copy& site){
    out<<"============================================"<<endl;
    out<<"base info     data           "<<site.base->data<<endl;
    out<<"              No             "<<site.base->No<<endl;
    out<<"              last base add  "<<site.base->last<<endl;
    out<<"              next base add  "<<site.base->next<<endl;
    out<<"              Copy add       "<<site.base->add<<endl;
    out<<"No                           "<<site.No<<endl;
    out<<"Name                         "<<site.name<<endl;
    out<<"============================================";

    return out;
    
}
ostream& operator << (ostream& out,const node& base){
    out<<"============================================"<<endl;
    out<<"base info     data           "<<base.data<<endl;
    out<<"              No             "<<base.No<<endl;
    out<<"              last base add  "<<base.last<<endl;
    out<<"              next base add  "<<base.next<<endl;
    out<<"              Copy add       "<<base.add<<endl;
    out<<"============================================";

    return out;

}








