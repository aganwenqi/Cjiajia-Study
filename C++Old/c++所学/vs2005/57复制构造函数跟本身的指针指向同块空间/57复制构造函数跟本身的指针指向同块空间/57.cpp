#include<iostream>
using namespace std;
class A
{
public:
	A(){x=new int;*x=5;}
	~A(){delete x;x=NULL;}
	A(A&s){x=s.x;cout<<"���ø��ƹ��캯��"<<endl;}
	void set(int i){*x=i;}
	void get()const{cout<<"x:"<<*x<<endl;}
private:
	int *x;
};
int main()
{
	A *a=new A;
	a->get ();
	A b=(*a);
	b.get();
	b.set (1);
	a->get ();
	//delete a;
     b.get ();
	 //���ɾ��a����Ļ���ôָ��ᱻɾ�����ռ�ᱻ�����������ƶ���b��ָ��ָ���aָ��ͬһ��
	 //���������������b���������ʸò����ڵ�׵�ռ䣬��ô����ͻ����
	return 0;
}

