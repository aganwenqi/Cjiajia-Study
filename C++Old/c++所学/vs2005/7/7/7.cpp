#include<iostream>

int show(int x,int y)
{
	//返回到int show(int x,int y)
	return x+y;
}

int main()
{
	int a,b,c;
	std::cout<<"请输入三个整数\n";
	std::cin>>a>>b>>c;
	//（a，c）代表（int x，int y）里的x和y
	std::cout<<"a+b="<<show(a,c)<<"\n";
	std::cout<<"b+c="<<show(b,c)<<"\n";
	return 0;
}