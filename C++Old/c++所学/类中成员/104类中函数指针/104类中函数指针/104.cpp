#include<iostream>
using namespace std;
class A
{
public:
	void set(int i,int j)
	{
		x=i;
		y=j;
	}
	void get()
	{
		cout<<"x:"<<x<<"\t"<<"y:"<<y<<endl;
	}
private:
	int x;
	int y;
};
void (A::*p)(int ,int );
int main()
{
	A a;
	p=&A::set;
	int x=2,y=3;
	(a.*p)(2,3);
	a.get();
	return 0;
}