#include<iostream>
using namespace std;
class human
{
public:
	//��ʾ������ֻ�Ǹ��ӿڣ��������������Ҫ�й���
	virtual void beautiful()=0;
	virtual void smart()=0;
	virtual ~human(){cout<<"�鹹����"<<endl;}

};
//���������
class father:virtual public human
{
public:
	virtual void smart(){cout<<"����ܴ�"<<endl;}
	virtual void beautiful(){cout<<"���׺�Ư��"<<endl;}
	virtual ~father(){cout<<"��������"<<endl;}
};
class mother:virtual public human
{
public:
	virtual void beautiful(){cout<<"�����Ư��"<<endl;}
	virtual void smart(){cout<<"ĸ�׺ܴ�"<<endl;}
	virtual ~mother(){cout<<"����ĸ��"<<endl;}
};
class son:public father,public mother
{
public:
	void beautiful(){cout<<"����Ư��"<<endl;}
	~son(){cout<<"��������"<<endl;}
};
int main()
{
	human*h;
	int choick=0;
	bool quit=false;
	while(choick<99)
	{
	cout<<"0�˳���1���ף�2����,3ĸ��"<<endl;
	cin>>choick;
	switch(choick)
	{
	case 0:quit=true;break;
	case 1:h=new father;
		h->beautiful();
		h->smart();
		delete h;
		break;
	case 2:h=new son;
		h->beautiful();
		h->smart();
		h->human::beautiful();
		delete h;
		break;
	case 3:h=new mother;
		h->beautiful();
		h->human::beautiful();
		delete h;
		break;
	default:break;
	}
	if(quit)
	{
		break;
	}
	}
}