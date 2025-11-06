#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;
const int VALUES=50;
string nextString(string str,int start_index);
int split(string str,string a[], int max_size);
void  output_title(string filename);
void  output_mag_loc(string filename);
int main(){
	//open a file
	
	cout<<"enter file name: ";
	string filename;
	getline(cin,filename);
	output_title(filename);
	cout<<endl;
	output_mag_loc(filename);
	return 0;
	}
string nextString(string str,int start_index){
	string temp;
	for(int i=start_index;i<str.length();i++){
		if(str.c_str()[i]==','){
		return temp;
		}
		temp+=str[i];
		}
	
	
	}
	
int split(string str,string a[], int max_size){
	int length=0;
	int l=str.length();
	max_size=VALUES;
	
	for(int i=0;i<max_size;i++){
		a[i]=nextString(str,length);
		length+=a[i].length()+1;//skip comma
		if(length==l+1){
			return i+1;
			}
		
		
		}
	
	}
	
void output_title(string filename){
	ifstream file_in;
	file_in.open(filename.c_str());
	if(file_in.fail()){
		cout<<"fail to open the file \n";
		exit(1);
		
		}
	string line;
	getline(file_in,line);	
	string a[VALUES];
	int number;
	number=split(line,a,VALUES);
	
	for(int i=0;i<number;i++){
		cout.setf(ios::left);
		cout.width(3);
		cout<<i<<a[i]<<endl;
		}
	
	file_in.close();
	
	}
	
void  output_mag_loc(string filename){
	ifstream file_in;
	file_in.open(filename.c_str());
	if(file_in.fail()){
		cout<<"fail to open the file \n";
		exit(1);
		
		}
	string line;
	bool flag=false;
	while(getline(file_in,line)){
		if(flag){
			string a[VALUES];
			int number;
			number=split(line,a,VALUES);
			cout.setf(ios::left);
			cout.width(5);
			cout<<a[4]<<a[14].substr(0,a[14].length()-1)<<endl;
			}
		flag=true;
		
		}
		file_in.close();
	
	}


