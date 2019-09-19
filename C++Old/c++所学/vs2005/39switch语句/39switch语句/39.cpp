#include<iostream>
using namespace std;
int main()

{   bool gan=false;
	char a;
	while(1)
	{
	cout<<"请输入一个数字： ";
	cin>>a;
	switch(a)
	{
		//假如没有遇到break指令，那么它会跳转到你输入的数字那行开始执行到结束
	case '0':cout<<"这个数为0\n";break;
	case '1':cout<<"这个数为1\n";break;
	case '2':cout<<"这个数为2\n";break;
	case '3':cout<<"这个数为3\n";break;
	case '4':cout<<"这个数为4\n";break;
    case 'q':gan=true;
	default:cout<<"您输入的数字不在0到4之间";
	}
	if(gan==true)
	{
		cout<<"结束";
		break;
	}
	}
	return 0;

}
