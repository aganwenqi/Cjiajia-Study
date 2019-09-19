#include<iostream>
using namespace std;
void gan(int *a,int *b)
{int c;
cout<<"副本交换前";
cout<<"a:"<<*a<<"\t"<<"b:"<<*b<<endl;
c=*a;
*a=*b;
*b=c;
cout<<"副本交换后";
cout<<"a:"<<*a<<"\t"<<"b:"<<*b<<endl;
}
int main()
{
	int a,b;
	a=3;
	b=4;
	cout<<"本身的值";
cout<<"a:"<<a<<"\t"<<"b:"<<b<<endl;
//把x和y的地址传进去
	gan(&a,&b);
cout<<"副本里地址的值交换后本身的值";
cout<<"a:"<<a<<"\t"<<"b:"<<b<<endl;
return 0;
}