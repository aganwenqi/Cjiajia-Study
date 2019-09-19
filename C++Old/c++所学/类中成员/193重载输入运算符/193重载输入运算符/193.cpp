#include<iostream>
using namespace std;
class A
{
public:
	A(int sh){x=sh;}
	friend ostream&operator<<(ostream&s,A&c)
	{
		s<<c.x;
		return s;
	}
	int operator++(){cout<<"++i\n";x++;return x;}
	int operator++(int){cout<<"i++\n";int i=x;x++;return i;}
		friend istream&operator>>(istream&s,A&c)
	{
		s>>c.x;
		return s;
	}
private:
	int x;

};
int main()
{
	A a(1);
	cout<<++a<<a++<<endl;
	cin>>a;
	cout<<a<<endl;
}