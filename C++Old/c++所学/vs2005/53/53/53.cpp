#include<iostream>
using namespace std;
class A
{
public:
	A(int i){cout<<"析构函数运行..\n";x=i;}
	A(A&p){x=p.x;cout<<"执行复制构造函数创建对象"<<endl;}
	~A(){cout<<"析构函数运行\n";}
	int get(){return x;}

private:
	int x;
};
A& func()
{
	A *p=new A(99);
		cout<<"A对象的地址："<<p<<endl;
		return *p;
}
int main()
{
	A &r=func();
		cout<<"副本对象a的地址："<<&r<<endl;
		cout<<r.get()<<endl;
		A*p=&r;
		delete p;
		cout<<r.get()<<endl;
		return 0;
}