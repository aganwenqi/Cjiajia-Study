#include<iostream>
using namespace std;
int func(int [],int);
int main()
{
	int b,a[]={20,50,35,14,15};
	b=sizeof(a)/sizeof(int);
	cout<<func(a,b)<<endl;
}
int func(int a[],int b)
{
	int c=0;
	for(int w=0;w<b;w++)
	{
		c+=a[w];
	}
	return c;
}

	