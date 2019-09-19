#include<iostream>
using namespace std;
int main()
{
	int a,b;
	b=0;
	//1代表无限循环
	while(1)
	{
		cout<<"请输入一个整数：";
		cin>>a;
		cout<<"这个数为："<<a<<endl;
        b++;
		if(b>3)
		{break;
		cout<<"结束"<<endl;}
	}
cout<<"执行次数："<<b<<endl;
	return 0;
}