#include<iostream>
using namespace std;
class A
{
public:
	A(){x=1;}
	A(int c){x=c;}
	~A(){cout<<"��������"<<endl;}
	void set(int i){x=i;}
	void get(){cout<<"x:"<<x<<endl;}
	const A &operator++()
	{
		++x;
		
		return *this;
	}
		const A &operator++(int o)//�����ź�Ϊ�����Լ�
	{
		A an(*this);
		++x;
		return an;
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
A c=a++;
	c.get();
	a.get();
	delete p;
	return 0;
}
	