#include <iostream>
using namespace std;

class Qin{
private:
    int h;
public:
    void set_h(int j);
    int get_h();
    friend void operator << (ostream& out,Qin& r);
    
    friend int operator || (Qin e,Qin j,Qin k);
};
void Qin::set_h(int j){
    h=j;
    
}
int Qin::get_h(){
    return h;
}

void operator << (ostream& out,Qin& r){
    out<<r.h;
    out<<"dd";
    out<<endl;


}

int operator || (Qin e,Qin j,Qin k){
    return e.h+j.h+k.h;

}

int main(){
    Qin j;
    j.set_h(12);
    Qin k;
    k.set_h(2);
    Qin l;
    l.set_h(3);
    cout<<(k||j||l)<<endl;
    cout<<j;
    //an(j);
    return 0;
    
}