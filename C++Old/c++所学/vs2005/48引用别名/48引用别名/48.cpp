#include<iostream>
using namespace std;
class a
{
public:
	int get(){return i;}
	void set(int x){i=x;}
private:
	int i;
};
int main()
{
	int mun;
	//&numΪmun�ı���������Զ�����ı���
	int &num=mun;
	mun=100;
	cout<<"num:"<<num<<endl;
	cout<<"num:"<<&num<<endl;
	num=50;
	cout<<"mun"<<mun<<endl;
	cout<<"mun:"<<&mun<<endl;
	int b=888;
	num=b;
	cout<<"b:"<<b<<endl;
	cout<<"mun:"<<num<<endl;
	cout<<"b:"<<&b<<endl;
	cout<<"mun:"<<&num<<endl;
    a gan;
	a &wen=gan;
	wen.set(500);
		cout<<wen.get()<<endl;
	gan.set(600);
		cout<<gan.get()<<endl;
	return 0;
}