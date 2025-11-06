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
    /* deconstructor */
    ~Move();
    /* copy assignment */
    Move& operator = (const Move&);
};
int main(){
    Move instance3=Move("helli");
    std::cout<<"instance3 "<<instance3.getStrAdd()<<"  "<<instance3.getStr()<<std::endl;
    
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
/* deconstructor */
Move::~Move(){
    std::cout<<"delete constructor  "<<this->str<<std::endl;
    delete str;
    
}
