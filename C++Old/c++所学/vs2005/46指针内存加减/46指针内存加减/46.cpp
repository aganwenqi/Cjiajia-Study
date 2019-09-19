#include<iostream>
using namespace std;
int main()
{
	int *p=new int;
	p=0;
	cout<<"指针初始地址："<<p<<endl;
	p++;
	cout<<"指针自加1后地址："<<p<<endl;
	p--;
	cout<<"指针自减1后地址："<<p<<endl;
	p=p-2;
	cout<<"指针减2后地址："<<p<<endl;
	cout<<"指针地址减一根据类型取减多数字符"<<endl;
	int *p1=new int;
	p=p1;
	cout<<"指针的赋值运算\n";
	cout<<"p1的地址为"<<p1<<endl;
	cout<<"p的地址为"<<p<<endl;
	*p=p-p1;
	cout<<"差："<<*p<<endl;
	if(p==p1)
	{
		cout<<"他们地址相等\n";
	}
	return 0;
}