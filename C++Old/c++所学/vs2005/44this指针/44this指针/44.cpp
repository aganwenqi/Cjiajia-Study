#include<iostream>
using namespace std;
class gan
{
public:
	int get()const{return i;}
	//当然this指针式不用写，因为系统默认它的存在
	void set(int x){this->i=x;cout<<"this指针的地址： "<<this<<endl;}
private:
	int i;
};
int main()
{   gan a;
    a.set(9);
	cout<<"对象a的地址："<<&a<<"\n"<<a.get()<<endl;
	gan b;
    b.set(999);
	cout<<"对象b的地址："<<&b<<"\n"<<b.get()<<endl;
	return 0;
}