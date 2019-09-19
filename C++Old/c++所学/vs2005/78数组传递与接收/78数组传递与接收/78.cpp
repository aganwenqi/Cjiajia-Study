#include<iostream>
using namespace std;
int func(int a[])
{
	a[0]=100;
	return a[0];
}
int gan(int a[30])
{
	a[1]=110;
	return a[1];
}
int qiu(int *a)
{
	a[2]=210;
	return a[2];
}
int main()
{
	int a[30];
	cout<<"接收的值"<<func(a)<<endl;
	cout<<"接收的值"<<gan(a)<<endl;
	cout<<"接收的值"<<qiu(a)<<endl;
}