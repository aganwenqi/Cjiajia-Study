#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
string x;
char ah,ch,dh,sh,bh;
cout<<"       请输入字符y运行程序...,操作者必须按照要求，否则将结束！字符：";
cin>>sh;
while(1)
{
switch(sh)
{
case 'y':cout<<"    爱心图像分为五个部分，每部分将由你来操作显示什么！！\n";
	cout<<"请输入上左半部分显示的一个字符：";
	cin>>bh;
	cout<<"请输入上右半部分显示的一个字符：";
	cin>>ah;
		cout<<"请输入中间部分显示的一个字符：";
	cin>>bh;
		cout<<"请输入下半部分显示的一个字符：";
	cin>>dh;
	cout<<"请输入一组文字：";
	cin>>x;break;
default:goto loop;}
	string *p=&x;
	cout<<p<<endl;
int e,i,w,b=6,f=1,q=b+(b-1)*2;
float c=20,d=7,a;
cout<<setw(c+2)<<ch<<ch<<ch<<setw(q+d-3)<<ah<<ah<<ah<<endl;
			for(e=1;e<b;e++)
			{cout<<setw(c)<<ch;
			for(a=1;a<d;a++)
			{cout<<ch;}
			cout<<setw(q)<<ah;
			for(a=1;a<d;a++)
			{cout<<ah;}
			cout<<endl;
			f=f+1;c=c-3;d=d+6;q=q-6;
			for(i=1;i<f;i++)
			{c=c+0.5;	d=d-1;q=q+1;}	}
			c=c+0.5;
       cout<<setw(c)<<bh;
	   for(a=1;a<d*2;a++)
	   {cout<<bh;
	   }
	   cout<<endl;
	   a=c;a=a+1;d=d*2-2;
	   for(c=c-1;c>1;c--)
	   {	cout<<setw(a)<<dh;
	   for(b=1;b<d;b++)
	   {cout<<dh;
	   if(b==6&&a==c+5){cout<<setw(20)<<x<<setw(3);b=b+22;}
	   }
	   cout<<endl;
	         a=a+2;d=d-4;
		  if(c==2){cout<<setw(a-1)<<endl;}}
}
loop:

	   cout<<"结束"<<endl;
return 0;}