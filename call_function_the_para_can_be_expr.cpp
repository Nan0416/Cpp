#include <iostream>
using namespace std;
void ii(int i)
{
    cout<<"  "<<i<<endl;
}
int main(){
    int i=143;
    ii(i=11); // ok. it can be assignment statement and some other expression like n++;
    ii(i++);//first using, then ++
    ii(i);
    return 0;
}