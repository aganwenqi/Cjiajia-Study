#include<iostream>
using namespace std;
class father
{public:
	virtual void get()const{cout<<"�����ܰ���..\n";}
};
class son:public father
{public:
    void get()const{cout<<"�����ܰ���..\n";}
};
class daughtcr:public father
{public:
	 void get()const{cout<<"Ů���ܰ���..\n";}
};
void one(father);
void two(father*p);
void three(father&p);
int main()
{
	bool quit=false;
	int choice;
	father*p=0;
	while(1)
	{cout<<"(1)���ף�(2)Ů��,(3)����,�������˳�";
		cin>>choice;
		switch(choice)
		{
		case 1:p=new son;one(*p);break;
		case 2:p=new daughtcr;two(p);break;
		case 3:p=new son;three(*p);break;
		default:quit=true;
		}
		if(quit==true){break;}
	}
		return 0;
	
}
void one(father one)
{
	one.get();
}
void two(father*two)
{
	two->get();
}
void three(father&three)
{
	three.get();
}