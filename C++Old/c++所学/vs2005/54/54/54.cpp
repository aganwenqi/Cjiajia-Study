#include<iostream>
using namespace std;
class A
{
public:
	A(int i){cout<<"构造函数运行..\n";x=i;}
	A(A&p){x=p.x;cout<<"执行复制构造函数创建对象"<<endl;}
	~A(){cout<<"析构函数运行\n";}
	int get(){return x;}
	void set(int i){x=i;}

private:
	int x;
};
A &func(A&a)
{
	   a.set(101);
		cout<<"函数跳转"<<endl;
		return a;
}
int main()
{A *p=new A(99);
  cout<<p->get()<<endl;
	  func(*p);
		cout<<p->get()<<endl;
		delete p;
		return 0;
}