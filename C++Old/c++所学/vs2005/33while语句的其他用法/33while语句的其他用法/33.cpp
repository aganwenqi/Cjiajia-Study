#include<iostream>
using namespace std;
int main()
{
	char gan='u';
	while(gan=='u'||gan=='U')
	{
		cout<<"12345，上山打老虎"<<endl;
		cout<<"再看一次请按u，否则按其他键"<<endl;
		cin>>gan;
	}
	cout<<"结束\n";
	cout<<"老虎看不见你想看几次?"<<endl;
	cout<<"输入次数；";
	int a,b;
	a=0;
	cin>>b;
	while(a<b)
	{
		cout<<"老虎看不见"<<endl;
		a++;
	}
	cout<<"结束";

	return 0;
}