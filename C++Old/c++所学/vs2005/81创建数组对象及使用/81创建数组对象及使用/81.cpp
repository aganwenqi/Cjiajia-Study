#include<iostream>
using namespace std;
class gan
{
public:
	int a[5];
};
void main()
{//gan��5������
	gan o[5];
	cout<<"����������5����ֵ"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>o[i].a[i];
	}
	for(int b=0;b<5;b++)
	{
		cout<<"o"<<"["<<b+1<<"]="<<o[b].a[b]<<endl;
	}
	
}