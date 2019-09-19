#include"wen.h"
#include "book.h"
enum num{small,large,etc};
class Date//数据类....................................
{
public:
	Date(int Date){date=Date;cout<<"Date带一个参数的构造函数运行。。。\n";}
	~Date(){cout<<"Date析构函数执行。。。\n";}
	void print(){cout<<"date数值:"<<date<<"\n";}
    int comepare(const Date&);//比较函数
private:
	int date;

};
//比较函数
int Date::comepare(const Date&s)
{
        cout<<"Date比较函数运行。。。\n";
	if(date<s.date)
	{
		return small;
	}
	if(date>s.date)
	{
		return large;
	}
	if(date=s.date)
	{
		return etc;
	}
  return 100;
}
//链表类............................................
class Node
{
public:
	Node(){}
	virtual ~Node(){}
	virtual Node*insert(Date*one)=0;//插入接口函数
	virtual void print()=0;//输出函数
};
//中间节点类..........................................
class InterNode:public Node
{
public:
	InterNode(Date*one,Node*next);//中间节点
	virtual Node*insert(Date*one);//为了接口函数有用
	~InterNode(){delete thisDate;delete Next;}//删除尾节点和它自己的数据
	virtual void print(){thisDate->print();Next->print();}//输出函数
private:
	Date*thisDate;//指向中间节点数据
	Node*Next;//尾节点或下一个节点指针
};
//中间节点
InterNode::InterNode(Date*one,Node*next):thisDate(one),Next(next){}
//为了接口函数有用
Node* InterNode::insert(Date*one)
{
      int onea=thisDate->comepare(*one);
	  switch(onea)
	  {
	  case etc:
	  case large:{InterNode*number=new InterNode(one,this);
		  return number;}
	  case small:
		  Next=Next->insert(one);
		  return this;
	  }
	  return this;
}
//尾节点类..........................................
class TailNode:public Node
{
public:
	virtual Node*insert(Date*one);//插入中间节点
	virtual void print(){}
};
//插入中间节点
Node* TailNode::insert(Date*one)
{
 cout<<"插入中间节点。。。\n";
	InterNode*datenode=new InterNode(one,this);
	return datenode;
}
//头节点类..........................................
class HeadNode:public Node
{
public:
	HeadNode();//创建尾节点
	~HeadNode(){delete Next;}//删除中间节点
	virtual Node*insert(Date*one);
	virtual void print(){Next->print();}//输出函数
private:
	Node*Next;
};
//插入尾节点的数据
Node* HeadNode::insert(Date*one)
{
	 cout<<"插入尾节点的数据。。。\n";
	Next=Next->insert(one);
	return Next;
}
//创建尾节点
HeadNode::HeadNode()
{
	 cout<<"创建尾节点。。。\n";
	Next=new TailNode;
}
//标签类.............................................
class Label
{
public:
	Label();//创建一个头节点
	~Label();//析构头节点
	 void insert(Date*one);//插入节点的数据
	 void printLabel(){head->print();}//输出头指针的数据
private:
	HeadNode *head;

};
Label::Label()//创建一个头节点
{
	 cout<<"创建一个头节点。。。\n";
    head=new HeadNode;
}
//析构头节点,删除头节点
Label::~Label()
{
	cout<<"析构Label。。。\t";delete head;
	cout<<"头节点删除完！！\n";
}
//插入头节点的数据
void Label::insert(Date*one)
 {
	 cout<<"插入头节点的数据。。。\n";
     head->insert(one);
 }
int main()
{
	Date*pdate;
	int val;
	Label ll;
	for(;;)
	{
		cout<<"输入一个值，0表示退出\n";
		cin>>val;
		if(!val)
		{
			break;
		}
		 pdate=new Date(val);
		 ll.insert(pdate);
	}
	  ll.printLabel();
}

