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
	cout<<"����ܼ�Ϊ:"<<A::man()<<endl;
	for(int e=0;e<5;e++)
	{cout<<"������"<<e<<"��ż۸�"<<endl;
	cin>>f;
	a[e]=new A(f);
    cout<<"����ܼ�Ϊ:"<<A::man()<<endl;
	}
	for(int e=0;e<5;e++)
	{
		cout<<"��ɾ��Ҫɾ����ͼ��"<<endl;
		cin>>s;
		delete a[s];
		cout<<"����ܼ�Ϊ:"<<A::man()<<endl;
	}
}
