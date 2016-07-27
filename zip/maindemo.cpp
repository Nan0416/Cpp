#include <iostream>
#include <string>
#include "zipdigit.h"

using namespace std;
int main(){
    ZipDigit test1(995042);
    test1.parseDigit();
    cout<<test1.get_digitStr()<<endl;
    return 0;

}