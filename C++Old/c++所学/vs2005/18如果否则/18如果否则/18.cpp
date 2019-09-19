#include<iostream>
using namespace std;
int main()
{

	enum day{Sunday,Monday,Tuesday,Wednesday,Thursdat,Friday,Saturday};//不可变
	day today;//可变
	today=Monday;
	if(today==Sunday||today==Saturday)
	{
		cout<<"周末"<<endl;
	}
	else
		cout<<"工作日"<<endl;
	char ch='y';
	cin>>ch;
	cout<<ch<<"\n";
	
	if(ch=1)
	{
		cout<<"\b";
	}
	else
		cout<<"错误";
		return 0;
}
