#include<iostream>
using namespace std;
class A
{
public:
	A(int num):it(num){total++;}
	~A(){total--;}
	//������̬��Ա�������ñ������Ź��캯���Ĵ������Լ�һ��,����һ�μ�һ�Σ������Աһ��Ҫȫ�֣�����
	static int total;
	int get(){return it;}
	void set(int age){it=age;}
private:
	int it;
};

int A::total=0;
int main()
{
	const int number=5;
	int i;
	A*p[number];
	A b(10),c(20);
	for(i=0;i<number;i++)
	{
		p[i]=new A(i);
	}
	for(i=0;i<number;i++)
	{
		cout<<"�����У�"<<A::total<<"������\n";
		cout<<"����ɾ���� "<<p[i]->get()<<" ������\n";
		delete p[i];
	}
	//��Ϊtotal��ȫ�ֵģ�������������Ҳ��������
	cout<<"1:"<<b.total<<"   "<<b.get()<<endl;
	cout<<"2:"<<c.total<<"   "<<c.get()<<endl;
}