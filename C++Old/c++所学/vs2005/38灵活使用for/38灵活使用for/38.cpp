#include<iostream>
using namespace std;
int main()
{
	int i=0;

	for(int a=0,b=0,c=0;a<3;a++,b++,c++)
	{
		cout<<"a是"<<a<<" b是"<<b<<" c是"<<c<<endl;
	}
	cout<<"结束";
	for(;i<=3;)
	{
		i++;
		cout<<"运行"<<endl;
	}
	cout<<"执行了wan"<<endl;
	
	for(int i=0;i<5;cout<<"i:"<<i++<<endl)
	{
		;
	}
	cout<<"结束"<<endl;
    //空for语句会无限循环，它跟while（1）是一样的
		cin>>i;
	for(;;)
	{
i++;
		cout<<"运行"<<endl;
	}
	cout<<"结束"<<endl;
	
	return 0;
}