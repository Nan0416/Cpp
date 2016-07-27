#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	string str1,str2,str3;
	int pos;
	cout<<"Please input: ";
	getline(cin,str1);
	for (int i=0;i<abs(str1.length());i++){
			cout<<str1[i]<<endl;
		}
	for (int i=0;i<str1.length()-1;i++){
			str2+=str1[i];
			//str2[i]=str1[i];
		}
	cout<<str2<<endl;
	str3=str1.substr(0,str1.length()-1);
	cout<<str3<<endl;
	pos=str1.find("ello",1);
	cout<<pos<<endl;
	return 0;
	}
