#include<iostream>
using namespace std;
int main()
{
	int i=1;
	while(i<10)
	{
		cout<<"*";
		i++;
	}
	cout<<"\n"<<"循环结束"<<endl;
	cout<<"*********"<<endl;
	cout<<"请输入一个数字"<<endl;
	cin>>i;
	while(i<100&&i>0)
	{
		cout<<i<<endl;
		i++;
		break;
		
	}
	cout<<"结束";
	return 0;
}
