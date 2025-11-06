#include "Copy_copy.h"

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
Copy::Copy (Copy& site_){
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
    base->data=site_.base->data;
    base->No=site_.base->No;
    base->last=site_.base->last;
    base->next=site_.base->next;
    base->add=site_.base->add;
    // non dynamic variable is same as the default copy constructor;
    No=site_.No;
    // copy name
    int size_name=1;
    for(int i=0;site_.name[i]!='\0';i++){
        size_name++;
    }
    name=new char[size_name+1];
    for(int i=0;site_.name[i]!='\0';i++){
        name[i]=site_.name[i];
        
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
void Copy::operator = (Copy& site){
    
    /*
     
        *this=Copy(site);
        this should recursion
        *this is Copy type and site is also a copy site
     
    */
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

std::ostream& operator << (std::ostream& out,const Copy& site){
    out<<"============================================"<<std::endl;
    out<<"base info     data           "<<site.base->data<<std::endl;
    out<<"              No             "<<site.base->No<<std::endl;
    out<<"              last base add  "<<site.base->last<<std::endl;
    out<<"              next base add  "<<site.base->next<<std::endl;
    out<<"              Copy add       "<<site.base->add<<std::endl;
    out<<"No                           "<<site.No<<std::endl;
    out<<"Name                         "<<site.name<<std::endl;
    out<<"============================================";
    
    return out;
    
}
std::ostream& operator << (std::ostream& out,const node& base){
    out<<"============================================"<<std::endl;
    out<<"base info     data           "<<base.data<<std::endl;
    out<<"              No             "<<base.No<<std::endl;
    out<<"              last base add  "<<base.last<<std::endl;
    out<<"              next base add  "<<base.next<<std::endl;
    out<<"              Copy add       "<<base.add<<std::endl;
    out<<"============================================";
    
    return out;
    
}








