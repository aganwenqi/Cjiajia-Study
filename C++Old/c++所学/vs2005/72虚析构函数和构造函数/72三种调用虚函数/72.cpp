#include<iostream>
using namespace std;
class A
{public:
	A(){cout<<"构造A..\n";}
	virtual void get(){cout<<"类A..\n";}
	virtual ~A(){cout<<"析构A..\n";}
};
class B:public A
{public:
	B(){cout<<"构造B..\n";}
    void get(){cout<<"类B..\n";}
    ~B(){cout<<"析构B..\n";}
};
int main()
{
	A *p=new B;
	p->get();
	delete p;
	return 0;
}