#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="hello word";
	const char *ch;
	//c_str为string类的转换函数
	ch=str.c_str();
	cout<<ch<<endl;
}