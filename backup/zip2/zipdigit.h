#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;
const int LEN=5;

class ZipDigit{
    //number to 0011
private:
    string digitValue_str;
    int digitValue;
    string digitStr;
    int digitNum[LEN];
    string digitString[LEN];
    bool convert_and_check();
    void parseDigit();
public:
    /*  constructors  */
    ZipDigit();
    ZipDigit(string ZipdigitValue);
    /*  mutator  */
    void set_digitValue(string new_digitValue);
    /*  accessor  */
    string get_digitStr();
    
    
};