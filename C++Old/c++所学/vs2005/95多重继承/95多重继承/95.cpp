#include<iostream>
using namespace std;
class father
{
public:
	virtual void smart(){cout<<"����ܴ�"<<endl;}
	//virtual void beautiful(){}
	virtual ~father(){cout<<"��������"<<endl;}
};
class son:public father
{
public:
	void beautiful(){cout<<"����Ư��"<<endl;}
	~son(){cout<<"��������"<<endl;}
};
int main()
{
	father*ah;
	int choick=0;
	bool quit=false;
	while(choick<99)
	{
	cout<<"0�˳���1���ף�2����"<<endl;
	cin>>choick;
	switch(choick)
	{
	case 0:quit=true;break;
	case 1:ah=new father;
//		ah->beautiful();
		delete ah;
		break;
	case 2:ah=new son;
		dynamic_cast<son*>(ah)->beautiful();
		ah->smart();
		delete ah;
		break;
	default:break;
	}
	if(quit)
	{
		break;
	}
	}
}