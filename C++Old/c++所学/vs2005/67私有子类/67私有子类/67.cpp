#include<iostream>
using namespace std;
class father
{
	//私有子类不可访问父类的私有成员
public:
	void get(){cout<<"私有子类不可直接访问我，要通过私有子类的共有成员访问"<<endl;}
};
class son:private father
{
public:
	void set(){get();}
};
int main()
{
	son a;
	a.set();
	return 0;
}