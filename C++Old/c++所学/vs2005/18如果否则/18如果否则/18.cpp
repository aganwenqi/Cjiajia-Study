#include<iostream>
using namespace std;
int main()
{

	enum day{Sunday,Monday,Tuesday,Wednesday,Thursdat,Friday,Saturday};//���ɱ�
	day today;//�ɱ�
	today=Monday;
	if(today==Sunday||today==Saturday)
	{
		cout<<"��ĩ"<<endl;
	}
	else
		cout<<"������"<<endl;
	char ch='y';
	cin>>ch;
	cout<<ch<<"\n";
	
	if(ch=1)
	{
		cout<<"\b";
	}
	else
		cout<<"����";
		return 0;
}
