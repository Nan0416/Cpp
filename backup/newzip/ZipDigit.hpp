#ifndef ZIPDIGIT_HPP
#define ZIPDIGIT_HPP
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class ZipDigit{
private:
    int num;
    string binary;
public:
    ZipDigit();
    ZipDigit(int nun_);
    ZipDigit(string binary_);
    int getDigit();

};
#endif // ZIPDIGIT_HPP