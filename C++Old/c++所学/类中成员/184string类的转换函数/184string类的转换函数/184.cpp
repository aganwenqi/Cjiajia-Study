#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="hello word";
	const char *ch;
	//c_strΪstring���ת������
	ch=str.c_str();
	cout<<ch<<endl;
}