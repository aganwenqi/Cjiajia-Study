#include<iostream>
using namespace std;
int main()
{
	int a[8]={20,50,35,46,60,45,84,10};
	int b,c,d;
	for(b=0;b<7;b++)
	{
		for(c=0;c<7-b;c++)
		
		{if(a[c]>a[c+1])
			{ d=a[c];
		     a[c]=a[c+1];
			 a[c+1]=d;
	}
		
	}
	}
	for(c=0;c<8;c++)
	{
		cout<<a[c]<<endl;
	}
}
			