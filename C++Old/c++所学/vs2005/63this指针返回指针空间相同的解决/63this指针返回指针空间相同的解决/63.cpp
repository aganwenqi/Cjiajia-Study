#include<iostream>
using namespace std;
class A
{
public:
	A(){x=new int;*x=1;}
	A(int c){x=new int;*x=c;}
	~A(){delete x;x=NULL;cout<<"析构运行"<<endl;}
	A(const A&a){x=new int;*x=a.get();cout<<"复制构造"<<endl;}
	void set(int i){*x=i;}
	int get()const{return *x;}
		const A dapp(const A&s){*x=s.get();return *this;}
private:
	int *x;
};
int main()
{ A one(1),two(2);
 A three=one.dapp(two);
	cout<<"three"<<three.get()<<endl;
	return 0;
}