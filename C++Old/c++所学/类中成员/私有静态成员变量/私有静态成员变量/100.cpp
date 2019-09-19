#include<iostream>
using namespace std;
class A
{
public:
	void func(){cout<<A::x<<endl;}
	static void show(){cout<<x<<endl;x++;}
private:
	static int x;
};
int A::x=1000;
int main()
{
	A a;
	a.func();
	for(int i=0;i<6;i++)
	A::show();

}