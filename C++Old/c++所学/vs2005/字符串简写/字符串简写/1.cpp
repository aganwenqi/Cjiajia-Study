#include<iostream>
using namespace std;
int main()
{
	char a[12]={"ABCDEFIJKl"};
//字符串可以不使用循环输出，直接输出；\0表示输出遇到它时结束
	//输出字符串可以直接键入a
	cout<<a<<endl;
	//可以直接输入字符串，但是这种输入不认空格
	//cin>>a;
	//cout<<a<<endl;
	//下面的输入空格
	gets(a);
		cout<<a<<endl;
		//下面这种输出表示限定输出，a代表输入的数组，12代表输入数组的个数
		cin.get(a,12);
		cout<<a<<endl;

}