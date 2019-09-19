#include<iostream>
using namespace std;
class A
{
public:
	A(int x){i=x;cout<<"i="<<i<<"构造函数运行..\n";}
	~A(){cout<<"i="<<i<<"析构函数运行..\n";}
	void get(){cout<<"i="<<i<<endl;}
	operator int(){return i;}
private:
	int i;
	};
	int main()
	{  int x,y(1000);
		A a(30);
		//可以把变量给a对象，但对象不能给变量，实现对象转变量在上面operator
		a=y;
		a.get();
		//a=A(100);
		//a.get();
		//以变量的形式给x
		x=a;
cout<<"x="<<x<<endl;
		return 0;
	}