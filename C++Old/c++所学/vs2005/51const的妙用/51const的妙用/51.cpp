#include<iostream>
using namespace std;
int func(int a,int *b,int *c);
int main()
{
loop:
	int a,b,c,d;
	cout<<"������Ҫ���е����֣�";
	cout<<"����������ֽ���ΪԲ�ļ�������������εļ������";
	cin>>a;
	d=func(a,&b,&c);
	if(d)
	{cout<<"�������ֳ�����Χ\n";
	goto loop;}
	else
	{cout<<"Բ�������"<<b<<endl;
	cout<<"�����ε������"<<b<<endl;
	goto loop;}}
	int func(int a,int *b,int *c)
	{
		if(a>20000)
		{a=1;
		}
		else
		{*b=a*a*3.14;
		*c=a*a;a=0;}
		return a;}