#include <iostream>
#include "ZipCode.hpp"
#include "ZipDigit.hpp"

int main(){
    ZipCode zip1(123);
    cout<<zip1.get_zip_code()<<endl<<zip1.get_bar_code()<<endl;
    ZipCode zip2("1100011000000110010100110");
    cout<<zip2.get_zip_code()<<endl<<zip2.get_bar_code()<<endl;
   

    return 0;

}