#include<iostream>
using namespace std;
class animal
{
public:
	  animal(int);
	virtual ~animal(){cout<<"析构动物..."<<endl;}
	//返回年龄
	virtual int getage(){return itsage;}
		//接口函数
		//睡觉
		virtual void sleep()=0;
	//动物类型
	    virtual void propagate()=0;
	//功能
		virtual void move()=0;
   //体表
		virtual void body()=0;
		//吃
		virtual void eat()=0;
		//显示年龄
		virtual void show()=0;

private:
	int itsage;
};
animal::animal(int age):itsage(age)
{
	cout<<"创建动物\n";
}
//哺乳动物
class mammalia:public animal
{
public:
	 mammalia(int age):animal(age)
	{
		cout<<"创建哺乳动物\n";
	}
	virtual ~mammalia(){cout<<"析构哺乳动物...\n";}
};
//创建鸟类
class bird:public animal
{
public:
	 bird(int age):animal(age)
	{
		cout<<"创建鸟类\n";
	}
	virtual ~bird(){cout<<"析构鸟类...\n";}
		//睡觉
		virtual void sleep()
		{
			cout<<"鸟是站在树上睡觉\n";
		}
	//动物类型
	    virtual void propagate()
		{
			cout<<"鸟是卵生动物\n";
		}
	//功能
		virtual void move()
		{
			cout<<"鸟会飞\n";
		}
   //体表
		virtual void body()
		{
			cout<<"鸟有两双翅膀\n";
		}
		//吃
		virtual void eat()
		{
			cout<<"有些鸟吃肉，有些只吃素\n";
		}
		//显示年龄
		virtual void show()
		{
			cout<<"年龄："<<getage()<<endl;
		}


};
//创建人类
class human:public animal
{
public:
	 human(int age):animal(age)
	{
		cout<<"创建人类\n";
	}
	virtual ~human(){cout<<"析构人类...\n";}
		//睡觉
		virtual void sleep()
		{
			cout<<"人躺着睡觉\n";
		}
	//动物类型
	    virtual void propagate()
		{
			cout<<"人胎生动物\n";
		}
	//功能
		virtual void move()
		{
			cout<<"人会走路\n";
		}
   //体表
		virtual void body()
		{
			cout<<"人有手脚\n";
		}
		//吃
		virtual void eat()
		{
			cout<<"人吃肉和饭\n";
		}

//显示年龄
		virtual void show()
		{
			cout<<"年龄："<<getage()<<endl;
		}

};
//创建猪类
class pig:public mammalia
{
public:
	 pig(int age):mammalia(age)
	{
		cout<<"创建猪类\n";
	}
	virtual ~pig(){cout<<"析构猪类...\n";}
		//睡觉
		virtual void sleep()
		{
			cout<<"猪躺着睡觉\n";
		}
	//动物类型
	    virtual void propagate()
		{
			cout<<"猪胎生动物\n";
		}
	//功能
		virtual void move()
		{
			cout<<"猪四脚走路\n";
		}
   //体表
		virtual void body()
		{
			cout<<"猪有手有脚\n";
		}
		//吃
		virtual void eat()
		{
			cout<<"猪吃饲料\n";
		}

//显示年龄
		virtual void show()
		{
			cout<<"年龄："<<getage()<<endl;
		}

};
int main()
{
	animal*p=0;
	int choick=0;
	bool quit=false;
	while(choick<4)
	{
		cout<<"0退出，1猪，2鸟，3人"<<endl<<"请输入：";
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