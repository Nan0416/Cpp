#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
const int LEN=5;

class ZipDigit{
    //number to 0011
private:
    int digitValue;
    string digitStr;
    int digitNum[LEN];
    string digitString[LEN];
    
    bool check();
public:
    /*  constructors  */
    ZipDigit();
    ZipDigit(int ZipdigitValue);
    /*  mutator  */
    void set_digitValue(int new_digitValue);
    /*  accessor  */
    string get_digitStr();
    void parseDigit();
    
};