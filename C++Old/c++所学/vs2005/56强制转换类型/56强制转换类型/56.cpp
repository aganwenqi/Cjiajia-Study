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
	a=A(1000);//����a=1000һ���������ٴ������Ĺ��캯��
//ǰ�����explicit��������ô������ǿ��ת��
a.print();
		return 0;
	}
