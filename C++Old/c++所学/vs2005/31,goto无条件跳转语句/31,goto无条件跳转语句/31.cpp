#include<iostream>
using namespace std;
int main()
{
	int i=1;
gan:i++;
	cout<<"*";
	if(i<10)
	{
		goto gan;
	}
	cout<<"\n"<<"½áÊø\n";
	cout<<"*********"<<endl;
	return 0;
}