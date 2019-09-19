#include<iostream>
using namespace std;
class A
{
public:
	virtual ~A(){cout<<"a的析构..\n";}
	virtual void beal()const{cout<<"一般一圈力量260"<<endl;}
};
class B:public A
{public:
~B(){cout<<"b的析构..\n";}
	  void beal()const{cout<<"B的一圈力量300"<<endl;}
};
class C:public A
{public:
~C(){cout<<"c的析构..\n";}
	 void beal()const{cout<<"c的一圈力量400"<<endl;}
};
class D:public A
{public:
~D(){cout<<"d的析构..\n";}
	 void beal()const{cout<<"d的一圈力量500"<<endl;}
};
int main()
{  bool quit=false;
	A *p;
	A *p1;
int ch ,a;
for(;;)
{
	cout<<"(1)B的力度，(2)C的力度，(3)D的力度，(4)A的力度,(5)退出";
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