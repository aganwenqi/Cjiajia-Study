#include<iostream>
using namespace std;
class A
{
public:
	A(){x=new int;*x=1;cout<<"����"<<endl;}
	~A(){delete x;x=NULL;cout<<"����"<<endl;}
	A(const A&r){x=new int;*x=r.get();cout<<"���ƹ���"<<endl;}
	void set(int i){*x=i;}
	int get()const{return *x;}
  const A &operator=(const A&s){
	  if(this==&s)
	  {return *this;}
	  *x=s.get();return *this;cout<<"operator����\n";
  }
private:
	int *x;
};
int main()
{ A one,two,three;
one.set(3);
three=two=one=one;
cout<<"two"<<two.get()<<endl;
	return 0;
}