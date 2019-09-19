#include<iostream>
using namespace std;
class gan
{public:
	gan(){x=0;cout<<"gan的默认构造函数"<<x<<endl;}
	gan(int i){x=i;cout<<"gan带参数的构造函数"<<x<<endl;}
	~gan(){cout<<"gan的默认析构函数..."<<x<<endl;}
	void set(int i){x=i;}
	int get(){return x;}
private:
	int x;};
class wen
	{
public:
		wen(){x=100;cout<<"wen的默认构造函数"<<x<<endl;}
		wen(int i,int j,int k):x(i),sh(j),ch(k){cout<<"长方形的面积"<<ch.get()*sh.get()<<endl;}
		~wen(){cout<<"wen的析构函数运行.."<<x<<endl;}
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
