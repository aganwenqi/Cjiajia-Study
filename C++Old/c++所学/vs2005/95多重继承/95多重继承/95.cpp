#include<iostream>
using namespace std;
class father
{
public:
	virtual void smart(){cout<<"父类很大"<<endl;}
	//virtual void beautiful(){}
	virtual ~father(){cout<<"析构父亲"<<endl;}
};
class son:public father
{
public:
	void beautiful(){cout<<"儿子漂亮"<<endl;}
	~son(){cout<<"析构儿子"<<endl;}
};
int main()
{
	father*ah;
	int choick=0;
	bool quit=false;
	while(choick<99)
	{
	cout<<"0退出，1父亲，2儿子"<<endl;
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