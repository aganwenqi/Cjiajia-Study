#include<iostream>
using namespace std;
class A
{
public:
	A(int x){i=x;cout<<"i="<<i<<"���캯������..\n";}
	~A(){cout<<"i="<<i<<"������������..\n";}
	void get(){cout<<"i="<<i<<endl;}
	operator int(){return i;}
private:
	int i;
	};
	int main()
	{  int x,y(1000);
		A a(30);
		//���԰ѱ�����a���󣬵������ܸ�������ʵ�ֶ���ת����������operator
		a=y;
		a.get();
		//a=A(100);
		//a.get();
		//�Ա�������ʽ��x
		x=a;
cout<<"x="<<x<<endl;
		return 0;
	}