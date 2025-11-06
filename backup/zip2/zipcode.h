#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>
//#include "zipdigit.h"
using namespace std;
const int LENCode=5;


class ZipCode{
    //convert 11000 to num
private:
    int digitValue;
    string digitStr;
    int digitNum[LENCode];
    string digitString[LENCode];
    bool convert_and_check();
    bool parseCode();//check vaild or not

    
public:
    ZipCode();
    ZipCode(string binaryString);
    
    
    int getValue();
    void setdigitStr(string binaryString);
    //string getbinaryString();
    void output();
    
};