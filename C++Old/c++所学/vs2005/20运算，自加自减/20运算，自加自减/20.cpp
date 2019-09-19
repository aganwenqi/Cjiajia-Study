#include<iostream>
using namespace std;
void show()
{
	int a=1;
		cout<<++a<<"加1输出"<<endl;
	cout<<a++<<"加完下次输出"<<endl;
	cout<<a<<"加完后输出";
}
int main()
{
	int a=2;
	a+=6;//这个跟a=a+6一样
	cout<<a<<endl;
	a++;//自加1
	cout<<a<<endl;
	a--;//自减1
	cout<<a<<endl;
	show();
		return 0;
	
}
