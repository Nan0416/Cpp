#include <iostream>
//using namespace std;
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
    Copy (Copy& site_);
    ~Copy ();
    /* mutators */
    void set_base_data(int num_);
    void setNo(int num_);
    void setName(const char a[]);
    /* accessor*/
    int getnum();
    /* member functions */
    Copy* from_base_to_Copy(node* base_);
    void operator = (Copy& site);
    
    /* friends */
    friend void set_Copy_add_to_inside_base(Copy& site);
    friend Copy* gettop(const Copy& site);
    friend int sum(const Copy* site);
    friend void connect(Copy& last_,Copy& next_);
    friend std::ostream& operator << (std::ostream& out,const Copy& site);
    friend std::ostream& operator << (std::ostream& out,const node& base);
    
    
};