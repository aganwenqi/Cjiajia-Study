#include<iostream>
using namespace std;
class father
{
	//˽�����಻�ɷ��ʸ����˽�г�Ա
public:
	void get(){cout<<"˽�����಻��ֱ�ӷ����ң�Ҫͨ��˽������Ĺ��г�Ա����"<<endl;}
};
class son:private father
{
public:
	void set(){get();}
};
int main()
{
	son a;
	a.set();
	return 0;
}