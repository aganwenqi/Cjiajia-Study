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
	cout<<"���յ�ֵ"<<func(a)<<endl;
	cout<<"���յ�ֵ"<<gan(a)<<endl;
	cout<<"���յ�ֵ"<<qiu(a)<<endl;
}