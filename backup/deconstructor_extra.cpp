#include <iostream>
using namespace std;
class Test_decon{
private:
    int* h;
    
    
public:
    Test_decon();//default constructor
    Test_decon(int i);
    ~Test_decon();
    void seth(int i);
    int geth();


};
int main(){
    Test_decon u(12);
    cout<<u.geth()<<endl;
    u.seth(13);
    cout<<u.geth()<<endl;
    
    Test_decon y;
    
    return 0;

}

Test_decon::Test_decon(){
    h=new int;// there must be a new declare,
                // otherwise in the end ~Test will delete error
    
}
Test_decon::Test_decon(int i){
    h=new int;
    *h=i;
}
Test_decon::~Test_decon(){
    cout<<"delete"<<endl;
    delete h;
}
void Test_decon::seth(int i){
    //h=new int;  because in every constructor, the h has been instantiate
    //otherwise there will be an extra memory allocation
    *h=i;
}
int Test_decon::geth(){

    return *h;
}
