#include<iostream>
using std::cout;
using std::cin;
void show1()
{
	cout<<"Hello me!\n";
}
int show(int x,int y)
{
	return x+y;
}
int main()

{
	show1();
    int a,b,c;
	cin>>a>>b>>c;
	cout<<"a+b="<<show(a,b)<<"\n";
	cout<<"b+c="<<show(b,c)<<"\n";
	cout<<"½áÊø\n";
	std::cout<<endl;
	return 0;
}

	