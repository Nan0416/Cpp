#include <iostream>

using namespace std;
class pullet;

class goal{
private:
    friend class pullet;
    double h;
public:
    double geth();
    void seth(double j);
    };
