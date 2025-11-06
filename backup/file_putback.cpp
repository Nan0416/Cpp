#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{int c=110;
	int *i;
	i=&c;
	cout<<&c<<endl<<i<<endl<< *i<<endl;
		ifstream file_in;
		ofstream file_out;
		string file_in_location="/Users/hatakusunoki/Desktop/qin.txt";
		string file_out_location="/Users/hatakusunoki/Desktop/nan.txt";
		file_in.open(file_in_location);
		
		if(file_in.fail())
		{
				cout<<"file "<<file_in_location<<" does't exist!"<<endl;
				exit(1);
		}
		file_out.open(file_out_location);
		char transfer;
		//file_in.get(transfer);
		while(c<100){
			file_in.get(transfer);
		while(transfer!=' ')
		{
			cout<<c++<<endl;
				file_out.put(transfer);
				file_in.get(transfer);
		}
		file_in.putback('A');}
		return 0;
		file_in.get(transfer);
		cout<<" "<<transfer<<endl<<endl;
		return 0;
		
}
