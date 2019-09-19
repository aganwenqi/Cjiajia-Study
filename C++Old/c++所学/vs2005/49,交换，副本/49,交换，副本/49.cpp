#include<iostream>
using namespace std;
void a(int x,int y)
{int c;
cout<<"副本交换前";
cout<<"x:"<<x<<"\t"<<"y:"<<y<<endl;
c=x;
x=y;
y=c;
cout<<"副本交换后";
cout<<"x:"<<x<<"\t"<<"y:"<<y<<endl;
}
int main()
{
	int x,y;
	x=3;
	y=4;
	cout<<"本身的值";
cout<<"x:"<<x<<"\t"<<"y:"<<y<<endl;
	a(x,y);

cout<<"副本交换后本身的值";
cout<<"x:"<<x<<"\t"<<"y:"<<y<<endl;
return 0;
}