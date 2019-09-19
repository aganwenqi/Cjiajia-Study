#include<iostream>
using namespace std;
class A
{
public:
	A(int i){cout<<"析构函数运行..\n";x=i;}
	A(A&a){x=a.x;cout<<"执行复制构造函数创建对象"<<endl;}
	~A(){cout<<"析构函数运行\n";}
	int get(){return x;}

private:
	int x;
};
A func()
{
	A a(23);
		cout<<"对象a的地址："<<&a<<endl;
		return a;
}
int main()
{
	A &r=func();
		cout<<"副本对象a的地址："<<&r<<endl;
		cout<<r.get()<<endl;
		return 0;
}
