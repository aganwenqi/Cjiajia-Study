#include<iostream>
using namespace std;
class A
{
public:
	A(){x=new int;*x=5;}
	~A(){delete x;x=NULL;}
	A(A&s){x=new int;
		*x=*(s.x);cout<<"���ø��ƹ��캯��"<<endl;}
	void set(int i){*x=i;}
	void get()const{cout<<"x:"<<*x<<endl;}
	void add(){b=1;++b;}
	void get1()const{cout<<"b:"<<b<<endl;}
	void operator++(){++b;}//ֻҪmain�������ж����Լӣ���������иñ�����ô�ͻ��Լ�
private:
	int *x;
	int b;
};
int main()
{
	A *a=new A;
	A b=(*a);
	b.get();
	b.set (1);
	a->get ();
	a->add ();
	a->get1();
	++*a;
    a->get1();
	delete a;
     b.get ();

	
	
}
