#include<iostream>
using namespace std;
class A
{
public:
	A(int i,int j){x=i;y=j;}
	void set(int i,int j){x=i;y=j;}
	void print(){cout<<x<<endl;}
	void print()const{cout<<y<<endl;}
private:
	int x;
	int y;
};
void main()
{
	const A a(2,3);
	//const���û����const�ĳ�Ա����ʵ�����غ�����constֻ�ܵ���const����constֻ�ܵ��÷�const
	a.print();
	//a.set(4,5);
		A b(1,2);
	b.set(4,5);

}