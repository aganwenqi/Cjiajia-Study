#include<iostream>

int show(int x,int y)
{
	//���ص�int show(int x,int y)
	return x+y;
}

int main()
{
	int a,b,c;
	std::cout<<"��������������\n";
	std::cin>>a>>b>>c;
	//��a��c������int x��int y�����x��y
	std::cout<<"a+b="<<show(a,c)<<"\n";
	std::cout<<"b+c="<<show(b,c)<<"\n";
	return 0;
}