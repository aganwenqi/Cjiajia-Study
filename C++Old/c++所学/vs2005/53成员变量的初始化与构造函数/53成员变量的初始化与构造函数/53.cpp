#include<iostream>
using namespace std;
class gan
{public:
	gan(){x=0;cout<<"gan��Ĭ�Ϲ��캯��"<<x<<endl;}
	gan(int i){x=i;cout<<"gan�������Ĺ��캯��"<<x<<endl;}
	~gan(){cout<<"gan��Ĭ����������..."<<x<<endl;}
	void set(int i){x=i;}
	int get(){return x;}
private:
	int x;};
class wen
	{
public:
		wen(){x=100;cout<<"wen��Ĭ�Ϲ��캯��"<<x<<endl;}
		wen(int i,int j,int k):x(i),sh(j),ch(k){cout<<"�����ε����"<<ch.get()*sh.get()<<endl;}
		~wen(){cout<<"wen��������������.."<<x<<endl;}
		int bh(){return ch.get()*sh.get();}
private:
	int x;
	gan ch;
	gan sh;
	};
int main()
{
	gan();
	gan(20);
	wen();
	wen a(10,20,30);
	wen(10,20,30);
	return 0;
}
