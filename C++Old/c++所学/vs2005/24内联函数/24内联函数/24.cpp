#include<iostream>
using namespace std;
inline int gan(int);
int gan(int x){return x;}
int main()
{
	int x;
	cout<<"请输入一个数\n";
	cin>>x;
	cout<<gan(x)<<endl;
	return 0;
}