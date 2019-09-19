#include<iostream>
using namespace std;
class father
{
	//propecped该函数表示它的成员受保护，只有他的子类可以访问，其他不能访问
	//private它的子类照样不可访问
protected:
	int zl;
	int sg;
public:
	void tz(int s){zl=s;}
    void gd(int sh){sg=sh;}
	void get(){cout<<"体重"<<zl<<"\t"<<"身高"<<sg<<endl;}
};
class son:public father
{
private:
	int bc;
	int jk;
public:
void sb(int h){bc=h;cout<<"臂长"<<bc<<"\t";}
    void jb(int hs){jk=hs;cout<<"肩宽"<<jk<<"\t"<<endl;}
	void gan(){
	cout<<"体重"<<zl<<"\t"<<"身高"<<sg<<endl;
	cout<<"肩宽"<<jk<<"\t"<<endl;
	}
};
int main()
{
	son a;
	a.tz(50);
	a.gd(175);
	a.get();
	a.sb(35);
	a.jb(50);
	a.gan();
	return 0;
}