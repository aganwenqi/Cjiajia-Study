#include<iostream>
using namespace std;
class honman
{
public:
	void gan(){cout<<"基类的调用"<<endl;}
	void wen(int x){i=x;cout<<"带参数的基类调用"<<endl;}
	int printf(){cout<<"i=";return i;}
private:
	int i;
};
class father:public honman
{
public:
	void qi(int h){z=h;cout<<"带参数的父类"<<endl;}
    void printf1(){cout<<"体重"<<z<<endl;}
private:
	int z;
};
class mother:public honman
{
public:
	void feng(int th){t=th;cout<<"带参数的母类"<<endl;}
    void printf1(){cout<<"身高"<<t<<endl;}
	int b(){return honman::printf();}
private:
	int t;
};
class son:public father,public mother
{
public:
	void ganwen(int q){a=q;cout<<"带参数的子类"<<endl;}
    void printf3(){cout<<"肩宽"<<a<<endl;}
private:
	int a;
};
int main()
{
	son gq;
    gq.ganwen(30);
	gq.printf3();
	gq.feng(170);
	gq.mother::printf1();
	gq.qi(55);
	gq.father::printf1();
	gq.father::gan();
	gq.mother::wen(100);
	cout<<gq.mother::printf()<<endl;
	cout<<gq.b()<<endl;
	return 0;
}
