#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    char temp;
    string file_1_location;
    file_1_location="oct12.cpp";
    ifstream file_1;
    ofstream file_2;
    file_1.open(file_1_location);
    if(file_1.fail())
    {
        cout<<"open "<<file_1_location<<" failure."<<endl;
        exit(1);
    }
    string file_2_location="nan.txt";
    file_2.open(file_2_location);
    while (file_1.get(temp))  // read only one time
    {
        if(temp=='\n')
        {
            file_2.put('\\');
            file_2.put('n');
        }
        else if(temp==' ')
        {
            file_2.put('_');
        }
        else
        {
            file_2.put(temp);
        }
        
    }
    file_2.close();
    file_1.close();
    return 0;
}
