#include<iostream>
using namespace std;
int main()
{
	int a=0;
	int b;
	while(a<=10)
	{
		for(b=0;b<10;b++)
		{
			if(b==2)
			{continue;
			}
			cout<<b;
		}
		if(a==5)
		{
			break;
		}
		cout<<a;
		a++;
	}
	cout<<"½áÊø"<<endl;
	return 0;
}