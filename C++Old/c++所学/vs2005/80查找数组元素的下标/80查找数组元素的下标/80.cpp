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
	cout<<"������Ҫ���ҵ���ֵ:";
	cin>>x;
	
    d=ch.func(x,a,b);
	if(d==b){cout<<"û�в鵽����������Ԫ���У�"<<d<<"��"<<endl;}
	else{cout<<"����������ĵ�"<<d+1<<"λ"<<endl;}
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
