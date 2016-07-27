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

    ~Move();
};
Move create(int h){
    if(h<0){
        return Move("hello");
    }else{
        Move a("people");
        return a;
    }
}
void print(Move h){
    std::cout<<h.getStr()<<std::endl;
}
int main(){
    std::cout<<"intput ";
    int i;
    std::cin>>i;
    print(create(i));
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
    
    str=new std::string;
    *str=*move_.str;
    
    // 2 is right!
    
}
/* move assignment */
Move::~Move(){
    std::cout<<"delete constructor  "<<this->str<<std::endl;
    delete str;
    
}
