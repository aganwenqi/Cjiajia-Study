#include<iostream>
using namespace std;
class A
{
public:
	A(){x=1;}
	A(int c){x=c;}
	~A(){cout<<"析构运行"<<endl;}
	void set(int i){x=i;}
	int get()const{return x;}
	//A add(const A&r){return A(x+r.get());}
		A operator+(const A&r){return A(x+r.get());}
const A &operator++()
	{
		++x;
		
		return *this;
	}
		const A &operator++(int o)//给个信号为后置自加
	{
		A an(*this);
		++x;
		return an;
	}
private:
	int x;
};
int main()
{ A one(1),two(2),three;
	three=++(one+two);
cout<<"one"<<one.get()<<endl;
	cout<<"two"<<two.get()<<endl;
	cout<<"three"<<three.get()<<endl;
	return 0;
}
	