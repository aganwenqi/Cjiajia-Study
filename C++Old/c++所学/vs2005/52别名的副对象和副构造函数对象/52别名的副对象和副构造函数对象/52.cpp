#include<iostream>
using namespace std;
class A
{
public:
	A(int i){cout<<"������������..\n";x=i;}
	A(A&a){x=a.x;cout<<"ִ�и��ƹ��캯����������"<<endl;}
	~A(){cout<<"������������\n";}
	int get(){return x;}

private:
	int x;
};
A func()
{
	A a(23);
		cout<<"����a�ĵ�ַ��"<<&a<<endl;
		return a;
}
int main()
{
	A &r=func();
		cout<<"��������a�ĵ�ַ��"<<&r<<endl;
		cout<<r.get()<<endl;
		return 0;
}
