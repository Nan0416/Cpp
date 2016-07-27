

#include <iostream>
#include "pullet.h" //because in goal need know there is a tu member function in pullet
using namespace std;


class goal{

private:
    
    double h;
public:
    friend void pullet::tu(goal k);
    double geth();
    void seth(double j);
    };




