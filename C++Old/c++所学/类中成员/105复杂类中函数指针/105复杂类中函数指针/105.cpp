#include<iostream>
using namespace std;
class hunman
{
public:
	virtual void run()=0;
	virtual void eat()=0;

};
class father:public hunman
{
public:
	virtual void run(){cout<<"father�ܲ�100��";}
	virtual void eat(){cout<<"father�Է�100��";}

};
class mother:public hunman
{
public:
	virtual void run(){cout<<"mother�ܲ�100��";}
	virtual void eat(){cout<<"mother�Է�100��";}

};
int main()
{
	void (hunman::*pt)()=0;
	hunman*p=0;
	char choick1,choick2;
	bool quit=false;
	while(quit==false)
	{
		cout<<"0�˳�,1father,2mather"<<endl<<"-->>";
		cin>>choick1;
		switch(choick1)
		{
		case '0':quit=true;break;
		case '1':p=new father;break;
		case '2':p=new mother;break;
		default:choick1='q';break;
		}
		if(choick1=='q')
		{
			cout<<"����Ĳ���0~3,���������롣��";
			continue;
		}
		if(quit==true){break;}
		cout<<"0�˳���1�ܲ���2��"<<endl<<"-->>";
		cin>>choick2;
		switch(choick2)
		{
		case '0':quit=true;break;
		case '1':pt=&hunman::run;break;
		case '2':pt=&hunman::eat;break;
		default:choick2='q';break;
		}
	if(choick2=='q')
		{
			cout<<"����Ĳ���0~3,���������롣��";
			continue;
		}
	if(quit==true){break;}
	(p->*pt)();
  delete p;

	}
}
