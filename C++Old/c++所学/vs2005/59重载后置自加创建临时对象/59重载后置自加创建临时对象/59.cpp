#include<iostream>
using namespace std;
class A
{
public:
	A(){x=1;}
	~A(){}
	void set(int i){x=i;}
	void get(){cout<<"x:"<<x<<endl;}
	A operator++()
	{//������ʱ��������x����ֵ
		++x;
		A t;
		t.set(x);
		return t;
	}
private:
	int x;
};
int main()
{
	A *p=new A;
	A &a=*p;
	a.get();
	A b=++a;
	b.get();
	a.get();
	return 0;
}
	

