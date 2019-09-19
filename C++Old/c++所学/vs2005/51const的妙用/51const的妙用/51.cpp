#include<iostream>
using namespace std;
int func(int a,int *b,int *c);
int main()
{
loop:
	int a,b,c,d;
	cout<<"请输入要运行的数字，";
	cout<<"您输入的数字将作为圆的计算面积和正方形的计算面积";
	cin>>a;
	d=func(a,&b,&c);
	if(d)
	{cout<<"您的数字超出范围\n";
	goto loop;}
	else
	{cout<<"圆的面积："<<b<<endl;
	cout<<"长方形的面积："<<b<<endl;
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