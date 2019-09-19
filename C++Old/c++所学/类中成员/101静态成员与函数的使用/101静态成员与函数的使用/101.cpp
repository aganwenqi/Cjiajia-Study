#include<iostream>
using namespace std;
class A
{
public:
	A(float i){x=i;y=y+i;}
	~A(){y=y-x;}
	static float man(){return y;}
private:
	float x;
	static float y;
};
float A::y=0; 
int main()
{
	A *a[5];
	float f;
	int s;
	cout<<"书的总价为:"<<A::man()<<endl;
	for(int e=0;e<5;e++)
	{cout<<"请输入"<<e<<"编号价格"<<endl;
	cin>>f;
	a[e]=new A(f);
    cout<<"书的总价为:"<<A::man()<<endl;
	}
	for(int e=0;e<5;e++)
	{
		cout<<"请删除要删除的图书"<<endl;
		cin>>s;
		delete a[s];
		cout<<"书的总价为:"<<A::man()<<endl;
	}
}
