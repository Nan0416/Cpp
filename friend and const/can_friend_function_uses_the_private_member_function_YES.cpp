#include <iostream>
using namespace std;
class Test_class2;
class Test_class1{
private:
    int h;
    void justtest(){
        cout<<"nihao"<<endl;
    
    }
public:
    int geth(){
        return h;
    }
    void seth(int j){
        h=j;
    }
    friend void hu(Test_class1 e1){
        cout<<e1.h<<"  ";
        e1.justtest();
    }
    
};

int main(){
    Test_class1 w;
    hu(w);
    return 0;
    
    
}