#include<iostream>
#include<string>
using namespace std;
class father
{
public:
	father(){cout<<"父亲默认构造..\n";}
	~father(){cout<<"父亲析构..\n";}
	father(string i,int j){name=i;tall=j;cout<<"基类带参构造\n";}
	void get(){cout<<name<<tall<<"cm"<<endl;}
private:
	string name;
	int tall;
};
class son:public father
{
public:
	son(string a,int b,int c):father(a,b){zhong=c;cout<<"子类带参构造\n";}
	~son(){cout<<"子类析构..\n";}
	void set(){get();cout<<zhong<<endl;}
private:
	int zhong;
};
int main()
{
	son gan("甘文棋",170,50);
	gan.set();
	return 0;
}
