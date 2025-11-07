#include <iostream>

using namespace std;

typedef struct nan{
	int h;
	double j[2];
}nan;

int main(){
	nan n1;
	n1.h=2;
	n1.j[0]=1.2;
	n1.j[1]=2.2;
	
	nan n2;
	n2.h=2;
	n2.j[0]=1.2;
	n2.j[1]=2.2;

	if(n2==n1)
	{
		cout<<"yes"<<endl;
	}
	else 
	{
		cout<<"no"<<endl;
	}
	return 0;
}

