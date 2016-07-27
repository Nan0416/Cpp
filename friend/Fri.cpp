#include "fri.h"
#include "test.h"
void Fri(Test j){
    cout<<j.pri<<endl;
    j.setpri(10);
    cout<<j.getpri()<<endl;
    j.pri=12;
    cout<<j.getpri()<<endl;
    cout<<j.pri_fun()<<endl;
    
    
}
