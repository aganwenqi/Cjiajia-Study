#include<iostream>
using namespace std;
class father
{
	//propecped�ú�����ʾ���ĳ�Ա�ܱ�����ֻ������������Է��ʣ��������ܷ���
	//private���������������ɷ���
protected:
	int zl;
	int sg;
public:
	void tz(int s){zl=s;}
    void gd(int sh){sg=sh;}
	void get(){cout<<"����"<<zl<<"\t"<<"���"<<sg<<endl;}
};
class son:public father
{
private:
	int bc;
	int jk;
public:
void sb(int h){bc=h;cout<<"�۳�"<<bc<<"\t";}
    void jb(int hs){jk=hs;cout<<"���"<<jk<<"\t"<<endl;}
	void gan(){
	cout<<"����"<<zl<<"\t"<<"���"<<sg<<endl;
	cout<<"���"<<jk<<"\t"<<endl;
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