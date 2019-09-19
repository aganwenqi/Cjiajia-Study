#include<iostream>
using namespace std;
class A
{
public:
	A(){cout<<"默认构造函数"<<endl;}
	void set(int j,char k){x=j;y=k;}
	void print(){cout<<x<<y<<endl;}
private:
	int x;
	char y;};
	int main()
	{
		A *p;
		p=new A;
		p->set(3,'4');
		p->print();
		return 0;
	}
