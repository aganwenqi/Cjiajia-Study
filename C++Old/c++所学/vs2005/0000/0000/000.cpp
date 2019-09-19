#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int a,i,e=10;
	char gan='A';
	for(a=1;a<=10;a++)
	{gan='A';
		cout<<setw(e);
       e=e-1;
	for(i=1;i<=a;i++)
	{   cout<<gan;
	  gan++;
	if(a==1)
		cout<<endl;}
	if(i>a)
	for(gan=gan-2;gan>='A';gan--)
	{cout<<gan;
	  if(gan=='A')
		  cout<<endl;}}	
	return 0;}