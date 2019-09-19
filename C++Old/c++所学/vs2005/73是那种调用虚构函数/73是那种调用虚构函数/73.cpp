#include<iostream>
using namespace std;
class father
{public:
	virtual void get()const{cout<<"父亲跑百米..\n";}
};
class son:public father
{public:
    void get()const{cout<<"儿子跑百米..\n";}
};
class daughtcr:public father
{public:
	 void get()const{cout<<"女儿跑百米..\n";}
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
	{cout<<"(1)父亲，(2)女儿,(3)儿子,其它键退出";
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