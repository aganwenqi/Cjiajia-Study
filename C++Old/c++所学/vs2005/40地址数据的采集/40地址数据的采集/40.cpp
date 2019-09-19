#include<iostream>
using namespace std;
int main()
{
	typedef unsigned short int ab;
	ab a=5;
	ab c=2;
	ab *b=0;
	b=&a;
	cout<<"b地址为： "<<b<<endl;
	cout<<"b数据位： "<<*b<<endl;
	cout<<"a地址为： "<<&a<<endl;
	cout<<"a数据位： "<<a<<endl;
	//用指针修改存放在a中的数据
	*b=a+90;
	cout<<"指针数据为："<<*b<<endl;
	cout<<"a的数据为："<<a<<endl;
	//用a来修改存放在指针的数据
	a=*b+10;
     	cout<<"指针数据为："<<*b<<endl;
	cout<<"a的数据为："<<a<<endl;
	//更换地址
	b=&c;
cout<<"b地址为： "<<b<<endl;
	cout<<"b数据位： "<<*b<<endl;
	cout<<"c地址为： "<<&c<<endl;
	cout<<"c数据位： "<<c<<endl;
	return 0;
}