#include<iostream>
#include<string>
using namespace std;
void show(string str[],int n);
int main()
{
	const int a=5;
	int i=0;
	string str[a];
while(i<a)	
{    
		cin>>str[i];
		i++;
	}
	show(str,5);
}
void show(string str[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<str[i]<<endl;
	}
}