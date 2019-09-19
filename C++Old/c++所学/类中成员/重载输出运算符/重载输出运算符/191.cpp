#include<iostream>
using namespace std;
class A
{
public:
	A(int sh,int ch){x=sh,y=ch;}
	int x;
	int y;
};
//ÖØÔØÊä³öÔËËã·û
ostream&operator<<(ostream&s,const A&c)
{
	s<<c.x;
	s<<c.y;
	return s;
}
int main()
{
	A a(3,4),b(4,5);
	cout<<a<<b<<endl;
}