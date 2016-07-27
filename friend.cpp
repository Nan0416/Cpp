#include <iostream>
using namespace std;
class U{
public:
    int u;
    int r;
public:
    U operator + (const U&);
    ostream& operator << (ostream& out){
        //ostream out;
        out<<u;
        out<<r<<endl;
        return out;
    }
   // friend ostream& operator<<()
};
U U::operator +(const U&i){
    u=u+i.u;
    r=r+i.r;
    return *this;
}
int main(){
    U re;
    re.u=10;
    re.r=-10;
    U e;
    e.r=2;
    e.u=9;
    
    re=re+e;
    re<<(re << cout);
}