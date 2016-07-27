#include <iostream>
#include <string>
class Move{
private:
    std::string* str;
public:
    /* accessor and mutator */
    void setStr(const std::string str);
    std::string* getStrAdd() const;
    std::string getStr() const;
    /* defined constructor */
    Move(std::string str);
    /* default constructor */
    Move();
    /* move constructor */
    Move(const Move&&);
    /* move assignment */
    Move& operator = (const Move&&);
    /* deconstructor */
    ~Move();
};
int main(){
    /* defined constructor */
    Move instance1("hello"); // 0x7fbd00c03210
    /* instance1 0x7fbd00c03210 */
    std::cout<<"instance1 "<<instance1.getStrAdd()<<std::endl;
    std::cout<<"==============="<<std::endl;
    /* default constructor */
    Move instance2; // 0x7fbd00c03270
    /*
     defined constructor
     move assignment
     delete constructor  0x7fbd00c03250
     */
    instance2=Move("hello"); // 0x7fbd00c03270
    /* instance2 0x7fbd00c03270 */
    std::cout<<"instance2 "<<instance2.getStrAdd()<<std::endl;
    /* 
     defined constructor
     ??? why not the move constructor
     in addition there no info to proof like the move assignment 
     the Move("helli") seem like not be deleted.
     */
    Move instance3= Move("helli");
    /* instance3 0x7fbd00c03250 */
    std::cout<<"instance3 "<<instance3.getStrAdd()<<std::endl;
    
    return 0;
}
void Move::setStr(const std::string str){
    *(this->str)=str;
}
std::string* Move::getStrAdd() const {
    return str;
}
std::string Move::getStr() const {
    return *str;
}
/* defined constructor */
Move::Move(std::string str){
    std::cout<<"defined constructor"<<" this "<<this->str<<std::endl;
    this->str=new std::string;
    *(this->str)=str;
    
}
/* default constructor */
Move::Move(){
    std::cout<<"default constructor"<<std::endl;
    this->str=new std::string;

}
/* move constructor */
Move::Move(const Move&& move_){
    std::cout<<"move constructor"<<std::endl;
    /*
     
     1.assume the move constructor like
     Move instance= Move("hello");
     the Move("hello") will not be deleted by the deconstructor
     So I can just copy the pointer, not the content.
     
     */
    //this->str=new std::string;
    //str=move_.str;
    /*
     
     2.assume after move the constructor like
     Move instance = Move("hello");
     the Move("hello") will also be deleted by thr deconstructor
     */
    str=new std::string;
    *str=*move_.str;
    
    // 2 is right!
    
}
/* move assignment */
Move& Move::operator = (const Move&& move_){
    std::cout<<"move assignment"<<std::endl;
   // str=move_.str;
    
    str=new std::string;
    *str=*move_.str;
    return *this;
}
Move::~Move(){
    std::cout<<"delete constructor  "<<this->str<<std::endl;
    delete str;

}
