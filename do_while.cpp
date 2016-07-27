#include<iostream>
using namespace std;
int main()
{
    int count1,count2;
    count1=1;
    count2=1;
    
    while(count1++<2)
    {
        cout<<" count1 "<<count1<<endl;    //2
    }
    while(++count2<2)
    {
        cout<<" count2 "<<count2<<endl;       //none
    }
    
    count1=1;
    count2=1;
    
    while(count1<2)
    {
        count1++;
        cout<<" count1 "<<count1<<endl; //2
    }
    while(count2<2)
    {
        ++count2;
        cout<<" count2 "<<count2<<endl;   //2
    }
    
    count1=1;
    count2=1;
    
    while(count1<2)
    {
        count1++;
        cout<<" count1 "<<count1<<endl; //2
    }
    while(count2<2)
    {
        ++count2;
        cout<<" count2 "<<count2<<endl;   //2
    }
    count1=1;
    count2=1;
    count1++;   //unused +1
    ++count2;    //unused +1
    cout<<" count1 "<<count1<<endl;    //2
    cout<<" count2 "<<count2<<endl;    //2
    count1=1;
    count2=1;
    cout<<" count1 "<<count1++<<endl;    //1     used to output before +1
    cout<<" count2 "<<++count2<<endl;    //2     used to output after +1
    return 0;
}