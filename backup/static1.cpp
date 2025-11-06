#include <iostream>
using namespace std;
class test{
    public:
    int i;
    public:
    int geti(){
        return i;
    }
    void seti(int i){
        this->i=i;
    }
    
};
int main(){
    //test i;
    test::i=10;
    //i.seti(10);
//    /cout<<i.geti()<<endl;
    

}