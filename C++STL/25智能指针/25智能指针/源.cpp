#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;
class a
{
public:
	a(int ss=30):s(ss){cout<<"���캯��������"<<endl;}
	~a(){cout<<"��������������"<<endl;}
    a & operator = (a & aa)
	 {
		 cout<<this->s<<endl;
		 cout<<aa.s<<endl;
		 return aa;
	 }
	int s;
};
void demo1()
{

	a a1(10),a2(20),a3(30);
	a2=a1;
}
void main()
{
	demo1();
}