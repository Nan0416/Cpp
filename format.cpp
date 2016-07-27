#include <iostream>
#include <cmath>
#include <iomanip>  //setw
#include <fstream>
using namespace std;

int main()
{   ifstream file_in;
    file_in.open("format.cpp");
    string temp2;
    int linenum=0;
    while(getline(file_in,temp2)){
        cout.setf(ios::left);
        cout.width(3);
        cout<<++linenum<<temp2<<endl;
    }
    file_in.close();
	int seed;
	double d;
	int temp=100;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout.width(3);
    cout.setf(ios::left);
	cout<<12;
	cout.width(3);
	cout.setf(ios::left);
	cout<<1;
	cout.width(3);
	cout.setf(ios::left);
	cout<<12<<endl;
    cout.width(10);
    cout.setf(ios::right);
    cout<<12345678<<endl;
	return 0;
    
}
