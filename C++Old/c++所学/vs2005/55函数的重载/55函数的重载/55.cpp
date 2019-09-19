#include<iostream>
using namespace std;
class A
	//重载函数
{public:void sum();void sum(int x,int y);
private:int i;int j;};
void func(int);void func(long);void func(float);void func(double);
void A::sum(int x,int y){i=x;j=y;cout<<"i:"<<i<<"\t"<<"j;"<<j<<endl;}
void A::sum(){cout<<"i的立方："<<i*i*i<<"\t"<<"j的立方"<<j*j*j<<endl;}
int main(){	int a=10;long b=1000;float c=1.2;double d=1.23;
	cout<<"a\t"<<"b\t"<<"c\t"<<"d\t"<<endl;
	func(a);func(b);func(c);func(d);A e;e.sum(2,3);e.sum();return 0;}
void func(int a){cout<<"a的平方"<<a*a<<endl;}
void func(long b){cout<<"b的平方"<<b*b<<endl;}
void func(float c){cout<<"c的平方"<<c*c<<endl;}
void func(double d){cout<<"d的平方"<<d*d<<endl;}	