#include<iostream>
using namespace std;
void a(int x,int y)
{int c;
cout<<"��������ǰ";
cout<<"x:"<<x<<"\t"<<"y:"<<y<<endl;
c=x;
x=y;
y=c;
cout<<"����������";
cout<<"x:"<<x<<"\t"<<"y:"<<y<<endl;
}
int main()
{
	int x,y;
	x=3;
	y=4;
	cout<<"�����ֵ";
cout<<"x:"<<x<<"\t"<<"y:"<<y<<endl;
	a(x,y);

cout<<"�������������ֵ";
cout<<"x:"<<x<<"\t"<<"y:"<<y<<endl;
return 0;
}