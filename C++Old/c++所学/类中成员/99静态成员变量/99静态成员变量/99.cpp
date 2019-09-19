#include<iostream>
using namespace std;
class A
{
public:
	A(int num):it(num){total++;}
	~A(){total--;}
	//创建静态成员变量，该变量随着构造函数的创建而自加一次,析构一次减一次，这个成员一定要全局，如下
	static int total;
	int get(){return it;}
	void set(int age){it=age;}
private:
	int it;
};

int A::total=0;
int main()
{
	const int number=5;
	int i;
	A*p[number];
	A b(10),c(20);
	for(i=0;i<number;i++)
	{
		p[i]=new A(i);
	}
	for(i=0;i<number;i++)
	{
		cout<<"该类有："<<A::total<<"个对象\n";
		cout<<"正在删除第 "<<p[i]->get()<<" 个对象\n";
		delete p[i];
	}
	//因为total是全局的，所有其他对象也可以用它
	cout<<"1:"<<b.total<<"   "<<b.get()<<endl;
	cout<<"2:"<<c.total<<"   "<<c.get()<<endl;
}