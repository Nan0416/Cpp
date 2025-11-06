#include <iostream>
#include <string>
#include "ZipDigit.hpp"
using namespace std;
class ZipCode
{
public:
    ZipCode(int zip);
    // Constructs a ZipCode from an integer zip code value

    ZipCode(string code);
    // Constructs a ZipCode from a string of 1's and 0's

    string get_bar_code();
    // Returns the zip code in bar form

    int get_zip_code();
    // Returns the zip code in numeric form

private:
    int zip;
    int parse_bar_code(string code);
    // Returns an integer, parsed from the given bar code.
    // If the code is not valid, this function will print
    // an error message and then exit.

};