#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"你想看几次：";
	cin>>a;
	b=a;
	//do while无论你看几次哪怕0次他都会先执行一次
	do
	{
		cout<<"你再看"<<endl;
		a--;
	}while(a>0);
	cout<<"你看了："<<b+1<<"次"<<endl;
	return 0;
}