#include<iostream>
using namespace std;
int main()
{
	int a[13]={1,1};
	for(int i=2;i<13;i++)
	{
		a[i]=a[i-1]+a[i-2];
		cout<<"��"<<i<<"������������"<<a[i]<<endl;
	}
}