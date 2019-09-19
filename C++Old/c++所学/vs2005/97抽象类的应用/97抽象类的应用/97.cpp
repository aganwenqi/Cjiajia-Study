#include<iostream>
using namespace std;
class shape
{
public:
	virtual double area()=0;
};
//���������
class trigon:public shape
{
protected:
	double h,w;
public:
	trigon(double H,double W){h=H;w=W;}
	double area()
	{
		return h*w/2;
	}
};
//���������
class square:public trigon
{
public:
	square(double H,double W):trigon(H,W){}
	double area()
	{
		return h*w;
	}
};
//Բ�����
class circle:public shape
{
protected:
	//�뾶
	double radius;
public:
	circle(double H){radius=H;}
	double area()
	{
		return radius*radius*3.14;
	}
};
void main()
{
	shape*p;
	int choick=0;
	bool quit=false;
	while(1)
	{
		cout<<"0,�˳���1�����������2�����������3Բ���,4ˢ��"<<endl<<"������:";
		cin>>choick;
		switch(choick)
		{
		case 0:quit=true;break;
		case 1:p=new trigon(10,20);
			cout<<p->area()<<endl;break;
		case 2:p=new square(10,20);
			cout<<p->area()<<endl;break;
		case 3:p=new circle(10);
			cout<<p->area()<<endl;break;
		case 4:system("cls");break;
		default:break;
	}
		if(choick<4&&choick>0){delete p;}
		if(quit==true){break;}
	}
}


