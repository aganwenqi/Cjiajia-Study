#include"wen.h"
#include "book.h"
enum num{small,large,etc};
class Date//������....................................
{
public:
	Date(int Date){date=Date;cout<<"Date��һ�������Ĺ��캯�����С�����\n";}
	~Date(){cout<<"Date��������ִ�С�����\n";}
	void print(){cout<<"date��ֵ:"<<date<<"\n";}
    int comepare(const Date&);//�ȽϺ���
private:
	int date;

};
//�ȽϺ���
int Date::comepare(const Date&s)
{
        cout<<"Date�ȽϺ������С�����\n";
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
//������............................................
class Node
{
public:
	Node(){}
	virtual ~Node(){}
	virtual Node*insert(Date*one)=0;//����ӿں���
	virtual void print()=0;//�������
};
//�м�ڵ���..........................................
class InterNode:public Node
{
public:
	InterNode(Date*one,Node*next);//�м�ڵ�
	virtual Node*insert(Date*one);//Ϊ�˽ӿں�������
	~InterNode(){delete thisDate;delete Next;}//ɾ��β�ڵ�����Լ�������
	virtual void print(){thisDate->print();Next->print();}//�������
private:
	Date*thisDate;//ָ���м�ڵ�����
	Node*Next;//β�ڵ����һ���ڵ�ָ��
};
//�м�ڵ�
InterNode::InterNode(Date*one,Node*next):thisDate(one),Next(next){}
//Ϊ�˽ӿں�������
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
//β�ڵ���..........................................
class TailNode:public Node
{
public:
	virtual Node*insert(Date*one);//�����м�ڵ�
	virtual void print(){}
};
//�����м�ڵ�
Node* TailNode::insert(Date*one)
{
 cout<<"�����м�ڵ㡣����\n";
	InterNode*datenode=new InterNode(one,this);
	return datenode;
}
//ͷ�ڵ���..........................................
class HeadNode:public Node
{
public:
	HeadNode();//����β�ڵ�
	~HeadNode(){delete Next;}//ɾ���м�ڵ�
	virtual Node*insert(Date*one);
	virtual void print(){Next->print();}//�������
private:
	Node*Next;
};
//����β�ڵ������
Node* HeadNode::insert(Date*one)
{
	 cout<<"����β�ڵ�����ݡ�����\n";
	Next=Next->insert(one);
	return Next;
}
//����β�ڵ�
HeadNode::HeadNode()
{
	 cout<<"����β�ڵ㡣����\n";
	Next=new TailNode;
}
//��ǩ��.............................................
class Label
{
public:
	Label();//����һ��ͷ�ڵ�
	~Label();//����ͷ�ڵ�
	 void insert(Date*one);//����ڵ������
	 void printLabel(){head->print();}//���ͷָ�������
private:
	HeadNode *head;

};
Label::Label()//����һ��ͷ�ڵ�
{
	 cout<<"����һ��ͷ�ڵ㡣����\n";
    head=new HeadNode;
}
//����ͷ�ڵ�,ɾ��ͷ�ڵ�
Label::~Label()
{
	cout<<"����Label������\t";delete head;
	cout<<"ͷ�ڵ�ɾ���꣡��\n";
}
//����ͷ�ڵ������
void Label::insert(Date*one)
 {
	 cout<<"����ͷ�ڵ�����ݡ�����\n";
     head->insert(one);
 }
int main()
{
	Date*pdate;
	int val;
	Label ll;
	for(;;)
	{
		cout<<"����һ��ֵ��0��ʾ�˳�\n";
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

