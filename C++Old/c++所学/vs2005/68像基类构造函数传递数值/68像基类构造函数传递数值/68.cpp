#include<iostream>
#include<string>
using namespace std;
class father
{
public:
	father(){cout<<"����Ĭ�Ϲ���..\n";}
	~father(){cout<<"��������..\n";}
	father(string i,int j){name=i;tall=j;cout<<"������ι���\n";}
	void get(){cout<<name<<tall<<"cm"<<endl;}
private:
	string name;
	int tall;
};
class son:public father
{
public:
	son(string a,int b,int c):father(a,b){zhong=c;cout<<"������ι���\n";}
	~son(){cout<<"��������..\n";}
	void set(){get();cout<<zhong<<endl;}
private:
	int zhong;
};
int main()
{
	son gan("������",170,50);
	gan.set();
	return 0;
}
