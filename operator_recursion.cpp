#include <iostream>
#include <string>
using namespace std;
//ostream& operator << (ostream& out,string t);
string operator << (int out,string t);
int main(){
    string w="abcd";
    string h=(w.length()<<w);
    cout<<h<<endl;
}
/*ostream& operator << (ostream& out,string t){
    if(t.length()<2){
        return out;
    
    }else{
       // cout<<t.length()<<endl;
        out<<t.substr(0,t.length()-1);
        
    }
}*/

string operator << (int out,string t){
    if(t.length()<2){
        return t;
        
    }else{
        string u=t.substr(0,t.length()-1);
        return (t.length()<<u)+u;
        
        
        
        
        
    }
}

