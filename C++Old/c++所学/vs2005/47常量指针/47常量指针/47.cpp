#include<iostream>
using namespace std;
class A
{
public:
	int get(){return i;}
	void set(int x){this->i=x;}
private:
	int i;
};
int main()
{   

	A *p=new A;
	p=0;
	cout<<"p地址："<<p<<endl;
	p=p+1;
    cout<<"p地址："<<p<<endl;
	A *const p1=new A;
	//constA *P1=new A;把const放到前面指针可修改，他指向的对象不可修改
    cout<<"p1地址："<<p<<endl;
	//p1++;常量指针不可变
      p1->set(80);
   cout<<"p1:"<<p1->get()<<endl;
   delete p1;
  p=0;
	return 0;
}
