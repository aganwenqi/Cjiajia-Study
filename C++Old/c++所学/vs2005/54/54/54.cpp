#include<iostream>
using namespace std;
class A
{
public:
	A(int i){cout<<"���캯������..\n";x=i;}
	A(A&p){x=p.x;cout<<"ִ�и��ƹ��캯����������"<<endl;}
	~A(){cout<<"������������\n";}
	int get(){return x;}
	void set(int i){x=i;}

private:
	int x;
};
A &func(A&a)
{
	   a.set(101);
		cout<<"������ת"<<endl;
		return a;
}
int main()
{A *p=new A(99);
  cout<<p->get()<<endl;
	  func(*p);
		cout<<p->get()<<endl;
		delete p;
		return 0;
}