#include<iostream>
using namespace std;
class A
{
public:
	virtual ~A(){cout<<"a������..\n";}
	virtual void beal()const{cout<<"һ��һȦ����260"<<endl;}
};
class B:public A
{public:
~B(){cout<<"b������..\n";}
	  void beal()const{cout<<"B��һȦ����300"<<endl;}
};
class C:public A
{public:
~C(){cout<<"c������..\n";}
	 void beal()const{cout<<"c��һȦ����400"<<endl;}
};
class D:public A
{public:
~D(){cout<<"d������..\n";}
	 void beal()const{cout<<"d��һȦ����500"<<endl;}
};
int main()
{  bool quit=false;
	A *p;
	A *p1;
int ch ,a;
for(;;)
{
	cout<<"(1)B�����ȣ�(2)C�����ȣ�(3)D�����ȣ�(4)A������,(5)�˳�";
	cin>>ch;
	switch(ch)
	{
	case 1:p1=new B;break;
	case 2:p1=new C;break;
	case 3:p1=new D;break;
		case 5:quit=true;break;
	default:p1=new A;break;
	}
	if(quit==true){break;}
	p=p1;
	p->beal();
}    delete p1;
	return 0;
}