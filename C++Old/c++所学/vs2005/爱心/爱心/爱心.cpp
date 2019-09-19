#include<iostream>
#include<iomanip>
using namespace std;
void aixin()
{

	string ch="心";
	cout<<"请输入一个字符：";
	cin>>ch;
int a,e,i,w,b=6,f=1,q=b+(b-1)*2,d=7;
float c=20;
cout<<setw(c+3)<<ch<<setw(q+d)<<ch<<endl;
			for(e=1;e<b;e++)
			{cout<<setw(c)<<ch<<setw(d)<<ch<<setw(q)<<ch<<setw(d)<<ch<<endl;
			f=f+1;c=c-3;d=d+6;q=q-6;
			for(i=1;i<f;i++)
			{c=c+0.5;	d=d-1;q=q+1;}	}
			c=c+0.5;
       cout<<setw(c)<<ch<<setw(d)<<ch<<setw(d)<<ch<<endl;
	   a=c;a=a+1;d=d*2-2;
	   for(c=c-1;c>1;c--)
	   {	cout<<setw(a)<<ch<<setw(d)<<ch<<endl;
	       a=a+2;d=d-4;
		   if(c==2)
		   {cout<<setw(a-1)<<ch<<endl;
		    } 
	   }

}