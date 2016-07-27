#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    char temp;
    char temp_2;
    int flag=0;
    string file_1_location;
    file_1_location="nan.txt";
    ifstream file_1;
    ofstream file_2;
    file_1.open(file_1_location);
    if(file_1.fail())
    {
        cout<<"open "<<file_1_location<<" failure."<<endl;
        exit(1);
    }
    string file_2_location="recover_nan.cpp";
    file_2.open(file_2_location);
    while (file_1.get(temp))  // read only one time
    {
        if(temp=='_')
        {
        
            file_2.put(' ');
        }
        else if(temp=='\\')
        {
           
            file_1.get(temp_2);
            if(temp_2=='n')
            {
                file_2.put('\n');
            }
            else
            {
                file_2.put(temp);
                file_2.put(temp_2);
                
            }
        }
        else
        {
            file_2.put(temp);
            
        }
        
    }
    return 0;
}