#include<iostream>
using namespace std;
class A
{
public:
	A(int j){x=j;cout<<"123"<<endl;}
	void print(){cout<<x<<endl;}
private:
	int x;
};
	int main()
	{
	A a(99);
	a.print();
	a=A(1000);//它跟a=1000一样；假如再带参数的构造函数
//前面加上explicit函数，那么将不能强制转换
a.print();
		return 0;
	}
