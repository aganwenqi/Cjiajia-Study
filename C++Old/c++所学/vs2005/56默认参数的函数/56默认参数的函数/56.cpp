#include<iostream>
using namespace std;
class A
{public:
	void set(int =30,int =5);
		void gan(bool=false);
private:
	int i;
	int j;};
	void A::set(int wen,int qi)
	{i=wen;j=qi;}
	void A::gan(bool val)
	{if(val==false)
	{cout<<"i*j:"<<i*j<<endl;}
	else
	{ cout<<"i*j:"<<i*j/2<<endl;}}
	int main()
	{  while(1)
	{int n;
		A a;
		cin;
		a.set();
		a.gan();
		cout<<"按任意键确定"<<endl;
		cin>>n;
		a.gan(true);}
		return 0;
	}