#include<iostream>
using namespace std;
class A
{public:
	A(){cout<<"����A..\n";}
	virtual void get(){cout<<"��A..\n";}
	virtual ~A(){cout<<"����A..\n";}
};
class B:public A
{public:
	B(){cout<<"����B..\n";}
    void get(){cout<<"��B..\n";}
    ~B(){cout<<"����B..\n";}
};
int main()
{
	A *p=new B;
	p->get();
	delete p;
	return 0;
}