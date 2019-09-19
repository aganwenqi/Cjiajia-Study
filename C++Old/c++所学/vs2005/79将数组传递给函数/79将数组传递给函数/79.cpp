#include<iostream>
using namespace std;
int func(int *,int);
int main()
{
	int a[100],num=100;
	float vaer;
	for(int i=0;i<100;i++)
	{
		a[i]=num;
		num+=1;
		cout<<"第"<<i+1<<"成绩"<<a[i]<<"  ";
		if(i%10==0)
		{cout<<endl;}
	}
	cout<<endl;
	vaer=(float)func(a,100);
	cout<<"平均"<<(float)vaer<<endl;
}
int func(int *p,int num)
{
	int a=0;
	float vaer;
	for(int i=0;i<num;i++)
	{
	a+=*(p+i);
	}
	vaer=(float)a/num;
	return vaer;
}
