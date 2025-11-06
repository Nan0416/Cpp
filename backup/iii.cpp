#include <fstream>
#include <iostream>
using namespace std;
int main(){
    ofstream file_out;
    file_out.open("switch__.cpp");
    file_out<<"#include <iostream>\n"<<"using namespace std;\n"<<"int main(){\n";
    file_out<<"int p;\n"<<"cin>>p;\n";
    file_out<<"switch(p){\n";
    for(int i=0;i<200000000;i++)
    {
        file_out<<"case "<<i<<": cout<< \"  \"<<"<<i<<"<<\"  \""<<"<<endl;break;"<<endl;
        // case i: cout<<" "<<i<<" "<<endl;break;
    }
    file_out<<"default:break;\n}\nreturn 0;\n}";
    return 0;

}