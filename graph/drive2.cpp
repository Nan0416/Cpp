#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include "GraphX.hpp"
using namespace std;
int main(){
    GraphX hu;
    hu.scale(800,800);
    bool exit_=true;
    while(exit_){
        string listening=hu.input();
        if(listening=="rightbutton"){
            exit_=false;
        }else if(listening=="leftbutton"){
            exit_=false;
        }
    }
    return 0;
}