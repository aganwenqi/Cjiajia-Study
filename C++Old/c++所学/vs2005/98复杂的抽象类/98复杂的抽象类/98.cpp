#include<iostream>
using namespace std;
class animal
{
public:
	  animal(int);
	virtual ~animal(){cout<<"��������..."<<endl;}
	//��������
	virtual int getage(){return itsage;}
		//�ӿں���
		//˯��
		virtual void sleep()=0;
	//��������
	    virtual void propagate()=0;
	//����
		virtual void move()=0;
   //���
		virtual void body()=0;
		//��
		virtual void eat()=0;
		//��ʾ����
		virtual void show()=0;

private:
	int itsage;
};
animal::animal(int age):itsage(age)
{
	cout<<"��������\n";
}
//���鶯��
class mammalia:public animal
{
public:
	 mammalia(int age):animal(age)
	{
		cout<<"�������鶯��\n";
	}
	virtual ~mammalia(){cout<<"�������鶯��...\n";}
};
//��������
class bird:public animal
{
public:
	 bird(int age):animal(age)
	{
		cout<<"��������\n";
	}
	virtual ~bird(){cout<<"��������...\n";}
		//˯��
		virtual void sleep()
		{
			cout<<"����վ������˯��\n";
		}
	//��������
	    virtual void propagate()
		{
			cout<<"������������\n";
		}
	//����
		virtual void move()
		{
			cout<<"����\n";
		}
   //���
		virtual void body()
		{
			cout<<"������˫���\n";
		}
		//��
		virtual void eat()
		{
			cout<<"��Щ����⣬��Щֻ����\n";
		}
		//��ʾ����
		virtual void show()
		{
			cout<<"���䣺"<<getage()<<endl;
		}


};
//��������
class human:public animal
{
public:
	 human(int age):animal(age)
	{
		cout<<"��������\n";
	}
	virtual ~human(){cout<<"��������...\n";}
		//˯��
		virtual void sleep()
		{
			cout<<"������˯��\n";
		}
	//��������
	    virtual void propagate()
		{
			cout<<"��̥������\n";
		}
	//����
		virtual void move()
		{
			cout<<"�˻���·\n";
		}
   //���
		virtual void body()
		{
			cout<<"�����ֽ�\n";
		}
		//��
		virtual void eat()
		{
			cout<<"�˳���ͷ�\n";
		}

//��ʾ����
		virtual void show()
		{
			cout<<"���䣺"<<getage()<<endl;
		}

};
//��������
class pig:public mammalia
{
public:
	 pig(int age):mammalia(age)
	{
		cout<<"��������\n";
	}
	virtual ~pig(){cout<<"��������...\n";}
		//˯��
		virtual void sleep()
		{
			cout<<"������˯��\n";
		}
	//��������
	    virtual void propagate()
		{
			cout<<"��̥������\n";
		}
	//����
		virtual void move()
		{
			cout<<"���Ľ���·\n";
		}
   //���
		virtual void body()
		{
			cout<<"�������н�\n";
		}
		//��
		virtual void eat()
		{
			cout<<"�������\n";
		}

//��ʾ����
		virtual void show()
		{
			cout<<"���䣺"<<getage()<<endl;
		}

};
int main()
{
	animal*p=0;
	int choick=0;
	bool quit=false;
	while(choick<4)
	{
		cout<<"0�˳���1��2��3��"<<endl<<"�����룺";
		cin>>choick;
		switch(choick)
		{
		case 0:quit=true;
		case 1:p=new pig(1);
			break;
		case 2:p=new bird(50);
			break;
		case 3:p=new human(100);
			break;
		default:break;
		}
		if(quit==true){break;}
		p->body();
		p->eat();
		p->getage();
		p->move();
		p->propagate();
		p->show();
		p->sleep();
		cout<<"\n";
		delete p;

	}
	return 0;
}