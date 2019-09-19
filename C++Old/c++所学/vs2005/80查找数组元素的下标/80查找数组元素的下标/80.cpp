#include<iostream>
using namespace std;
class gan
{public:
int func(int ,int [],int);
};
int main()
{gan ch;
	while(1)
	{
	int x,d,b,a[100];
	for(int c=0;c<100;c++)
	{
		a[c]=c;
	}
	b=sizeof(a)/sizeof(int);
	cout<<"请输入要查找的数值:";
	cin>>x;
	
    d=ch.func(x,a,b);
	if(d==b){cout<<"没有查到该数，数组元素有："<<d<<"个"<<endl;}
	else{cout<<"该数在数组的第"<<d+1<<"位"<<endl;}
}
}
int gan::func(int c,int a[],int b)
{
	for(int d=0;d<b;d++)
	{
		if(a[d]==c)
		{
			return d;
		}
	}
	return b;
}
