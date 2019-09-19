#include<iostream>
using namespace std;
//数据类
class Date
{
public:
	Date(int Number, float Price):number(Number),price(Price){}//参数
	int getnumber()const{ return number; }
	float getprice()const{ return price; }
	virtual void print()const= 0;//输出
	virtual ~Date(){}
private:
	int number;
	float price;
};
class book :public Date
{
public:
	book(int Number, float Price) :Date(Number,Price){}
	virtual void print()const
	{
		cout << "图书的编号为：" << getnumber() << endl;
		cout << "图书的价格为：" << getprice()<< endl;
	}
private:
};
//药品类
class Drug :public Date
{
public:
	Drug(int Number, float Price) :Date(Number, Price){}
	virtual void print()const
	{
		cout << "图书的编号为：" << getnumber() << endl;
		cout << "图书的价格为：" << getprice() << endl;
	}
private:
};
class Node
{
public:
	Node(Date*pdate) :itsdate(pdate), itsnext(0){}
	~Node(){ delete itsdate; itsdate = NULL; }
	void setnext(Node*node){ itsnext = node; }
	Node*getnext()const{ return itsnext; }
	Date*getdate()const
	{
		if (itsdate)
		{
			return itsdate;
		}
		else
		{
			return NULL;
		}
	}
private:
	Date*itsdate;
	Node*itsnext;
};
class list
{
public:
	list() :head(0), count(0){}//初始化头节点，和链表的个数
	~list();//删除所有的节点
    Date*getfirst()const;//获取头节点
	Date*operator[](int offset)const;//获取任意一个节点
	void show();//输出所有节点的信息
	int getcount()const{return count;}//返回链表有几个节点
	void insert(Date*pdate);//插入节点
	void Delete(int num);//删除节点
	Date*find(int number);//查看要找的编号的数据的地址
private:
	Node*head;
	int count;
};
Date*list::find(int number)
{
	Node*pn=0;
	int i=0;
	for(pn=head;pn!=NULL;pn=pn->getnext())
	{    i++;
		if(pn->getdate()->getnumber()==number)
		{
			break;
		}
	}
	if(pn==NULL)
	{
		cout<<"没有找到要查找的数据\n";
	}
	cout<<"要找的数据在第-》"<<i<<"《-个节点\n";
	return pn->getdate();
}
void list::Delete(int num)
{
	Node*pback=head;
	Node*pnow=head;
	int i=1;
	if(!head)
	{
		cout<<"表中没有编号\n";
		return;
	}
	if(head->getdate()->getnumber()==num)
	{
		if(!head->getnext())
		{
            delete head;
			head=0;
			cout<<"数据被清空\n";
			count--;
			return;
		}
		head=head->getnext();
		delete pnow;
		cout<<"删除完第-》"<<i<<"《-个节点\n";
		pnow=0;
		count--;
		return;
	}
	while(pback)
	{
		if(!pback->getnext())
		{
			cout<<"找不到要删除的编号\n";
		}
		if(pback->getnext()->getdate()->getnumber()==num)
		{
			i+=1;
			pnow=pback->getnext();
			pback->setnext(pnow->getnext());
			delete pnow;
			cout<<"删除完第-》"<<i<<"《-个节点\n";
			pnow=0;
			return;
		}
		i++;
		pback=pback->getnext();
	}
	cout<<"找不到要删除的编号\n";
}
void list::insert(Date*pdate)
{ 
	Node*pn=new Node(pdate);//创建新节点
	Node*pnow=head;//保存头节点
	Node*pnext=0;//保存当前节点的下一个节点
	int New=pdate->getnumber();//保存插入节点的编号
    int next=0;//保存下一个编号
	count++;
	if(!head)
	{
		head=pn;
		return;
	}
	if(head->getdate()->getnumber()>New)
	{
		pn->setnext(head);
		head=pn;
		return;
	}
	for(;;)
	{
	if(!pnow->getnext())
	{
         pnow->setnext(pn);
		 return;
	}
	pnext=pnow->getnext();
	next=pnext->getdate()->getnumber();
      if(next>New)
	  {
		  pnow->setnext(pn);
		  pn->setnext(pnext);
		  return;
	  }
	  pnow=pnext;
	}
}
void list::show()
{
	if(!head)
	{
		return;
	}
	Node*na=head;
	do
	{
		na->getdate()->print();
	}
	while(na=na->getnext());
}
Date*list::operator[](int offset)const
{
	Node*ne=head;
	if(!head||offset>count)
	{
		return NULL; 
	}
	for(int i=0;i<offset;i++)
	{
      ne=ne->getnext();
	}
	return ne->getdate();
}
Date *list::getfirst()const
{
	if(head)
	{
		return head->getdate();
	}
	else
	{
		return NULL;
	}
}

list::~list()
{
             Node*l=head;
			 Node*m=0;
			 int n=0;
			 while(l)
			 {
				 m=l;
				 l=l->getnext();
				 delete m;
				 n++;
				 cout<<"删除第："<<n<<"个节点\n";
			 }
}
void main()
{
	list gan;
	Date*p=new book(100,200);
	Date*p1;
	gan.insert(p);
	p1=gan.find(100);
	p1->print();

}