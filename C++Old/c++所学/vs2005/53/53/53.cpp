#include<iostream>
using namespace std;
class A
{
public:
	A(int i){cout<<"������������..\n";x=i;}
	A(A&p){x=p.x;cout<<"ִ�и��ƹ��캯����������"<<endl;}
	~A(){cout<<"������������\n";}
	int get(){return x;}

private:
	int x;
};
A& func()
{
	A *p=new A(99);
		cout<<"A����ĵ�ַ��"<<p<<endl;
		return *p;
}
int main()
{
	A &r=func();
		cout<<"��������a�ĵ�ַ��"<<&r<<endl;
		cout<<r.get()<<endl;
		A*p=&r;
		delete p;
		cout<<r.get()<<endl;
		return 0;
}