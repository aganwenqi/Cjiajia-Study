#include<iostream>
using namespace std;
inline int gan(int);
int gan(int x){return x;}
int main()
{
	int x;
	cout<<"������һ����\n";
	cin>>x;
	cout<<gan(x)<<endl;
	return 0;
}