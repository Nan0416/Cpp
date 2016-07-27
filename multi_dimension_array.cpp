#include <iostream>
#include <cmath>
using namespace std;
const int size=3;
void mu();
int main(){
   // cout<<"inut ";
    int x,y,a,b;
    mu();
   // cin>>x>>y>>a>>b;
    cout<<endl<<cos(3.1415926)<<endl;
    return 0;

}

void mu()
{
    double a[size][size]={{1,0,130},{0,1,160},{0,0,1}};
    double b[size]={0,0,1};
    double c[size]={0,0,1};
    for(int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            c[i]+=a[i][j]*b[j];
        }
    }
    for(int i=0;i<size;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
}