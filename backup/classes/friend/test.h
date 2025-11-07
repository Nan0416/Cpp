#include <iostream>
//#include "fri.h"

using namespace std;
class Test{
private:
    int pri;
    int pri_fun();
public:
    int pub;
    void setpri(int r);
    int getpri();
    friend void Fri(Test j);
    
};