#include<iostream>
using namespace std;
class A
{
public:
	A(){x=new int;*x=5;}
	~A(){delete x;x=NULL;}
	A(A&s){x=s.x;cout<<"调用复制构造函数"<<endl;}
	void set(int i){*x=i;}
	void get()const{cout<<"x:"<<*x<<endl;}
private:
	int *x;
};
int main()
{
	A *a=new A;
	a->get ();
	A b=(*a);
	b.get();
	b.set (1);
	a->get ();
	//delete a;
     b.get ();
	 //如果删除a对象的话那么指针会被删除，空间会被析构，而复制对象b的指针指向跟a指向同一个
	 //区域，所以如果再用b对象来访问该不存在的椎空间，那么程序就会崩溃
	return 0;
}

