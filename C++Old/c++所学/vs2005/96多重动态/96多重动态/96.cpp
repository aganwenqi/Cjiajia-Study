#include<iostream>
using namespace std;
class human
{
public:
	//表示抽象，这只是个接口，它的派生类必须要有功能
	virtual void beautiful()=0;
	virtual void smart()=0;
	virtual ~human(){cout<<"虚构人类"<<endl;}

};
//定义虚基类
class father:virtual public human
{
public:
	virtual void smart(){cout<<"父类很大"<<endl;}
	virtual void beautiful(){cout<<"父亲很漂亮"<<endl;}
	virtual ~father(){cout<<"析构父亲"<<endl;}
};
class mother:virtual public human
{
public:
	virtual void beautiful(){cout<<"妈妈很漂亮"<<endl;}
	virtual void smart(){cout<<"母亲很大"<<endl;}
	virtual ~mother(){cout<<"析构母亲"<<endl;}
};
class son:public father,public mother
{
public:
	void beautiful(){cout<<"儿子漂亮"<<endl;}
	~son(){cout<<"析构儿子"<<endl;}
};
int main()
{
	human*h;
	int choick=0;
	bool quit=false;
	while(choick<99)
	{
	cout<<"0退出，1父亲，2儿子,3母亲"<<endl;
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