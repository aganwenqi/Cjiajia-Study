#include<iostream>
using namespace std;
class A
{
public:
	A(){cout<<"12345"<<endl;}
	//(A&s)复制构造函数，s为类A对象别名
	A(A&s){n=s.n;m=s.m;cout<<"默认复制构造函数运行"<<endl;}
	A(int i,int j){n=i;m=j;}
	void print(){cout<<n<<m<<endl;}
private:
	int n;
	int m;
};
int main()
{
	A();
	A a(1,2);
	a.print();
	A b(a);
	b.print();
	return 0;
}