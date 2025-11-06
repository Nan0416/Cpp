#include <iostream>
using namespace std;
namespace Variables{
    int a=10;
    int b=12;
    
}
namespace Variables2{
    int a=16;
    int b=14;
    int c=12;
}

int main(){
   
    namespace a1=Variables;//alias
    
    {
        using namespace Variables2;// for cout<<c<<endl;
        cout<<Variables::a<<endl;
        cout<<Variables2::b<<endl; //must declare using which namespace
        cout<<c<<endl; //THE nearest one's priority is highest.
    }
    {
       
        using a1::a;
        cout<<a<<endl;
    
    
    }
    {
        using namespace Variables;
        cout<<a<<endl;
        {
            using namespace Variables2;
            //cout<<"b "<<b<<endl;
            /*
             
             now use the both of namespaces 
             when output b will trigger
             
             */
            cout<<"c "<<c<<endl;
        
        }
        
        
    }
    return 0;


}