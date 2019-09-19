#include<iostream>
using namespace std;
//������
class Date
{
public:
	Date(int Number, float Price):number(Number),price(Price){}//����
	int getnumber()const{ return number; }
	float getprice()const{ return price; }
	virtual void print()const= 0;//���
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
		cout << "ͼ��ı��Ϊ��" << getnumber() << endl;
		cout << "ͼ��ļ۸�Ϊ��" << getprice()<< endl;
	}
private:
};
//ҩƷ��
class Drug :public Date
{
public:
	Drug(int Number, float Price) :Date(Number, Price){}
	virtual void print()const
	{
		cout << "ͼ��ı��Ϊ��" << getnumber() << endl;
		cout << "ͼ��ļ۸�Ϊ��" << getprice() << endl;
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
	list() :head(0), count(0){}//��ʼ��ͷ�ڵ㣬������ĸ���
	~list();//ɾ�����еĽڵ�
    Date*getfirst()const;//��ȡͷ�ڵ�
	Date*operator[](int offset)const;//��ȡ����һ���ڵ�
	void show();//������нڵ����Ϣ
	int getcount()const{return count;}//���������м����ڵ�
	void insert(Date*pdate);//����ڵ�
	void Delete(int num);//ɾ���ڵ�
	Date*find(int number);//�鿴Ҫ�ҵı�ŵ����ݵĵ�ַ
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
		cout<<"û���ҵ�Ҫ���ҵ�����\n";
	}
	cout<<"Ҫ�ҵ������ڵ�-��"<<i<<"��-���ڵ�\n";
	return pn->getdate();
}
void list::Delete(int num)
{
	Node*pback=head;
	Node*pnow=head;
	int i=1;
	if(!head)
	{
		cout<<"����û�б��\n";
		return;
	}
	if(head->getdate()->getnumber()==num)
	{
		if(!head->getnext())
		{
            delete head;
			head=0;
			cout<<"���ݱ����\n";
			count--;
			return;
		}
		head=head->getnext();
		delete pnow;
		cout<<"ɾ�����-��"<<i<<"��-���ڵ�\n";
		pnow=0;
		count--;
		return;
	}
	while(pback)
	{
		if(!pback->getnext())
		{
			cout<<"�Ҳ���Ҫɾ���ı��\n";
		}
		if(pback->getnext()->getdate()->getnumber()==num)
		{
			i+=1;
			pnow=pback->getnext();
			pback->setnext(pnow->getnext());
			delete pnow;
			cout<<"ɾ�����-��"<<i<<"��-���ڵ�\n";
			pnow=0;
			return;
		}
		i++;
		pback=pback->getnext();
	}
	cout<<"�Ҳ���Ҫɾ���ı��\n";
}
void list::insert(Date*pdate)
{ 
	Node*pn=new Node(pdate);//�����½ڵ�
	Node*pnow=head;//����ͷ�ڵ�
	Node*pnext=0;//���浱ǰ�ڵ����һ���ڵ�
	int New=pdate->getnumber();//�������ڵ�ı��
    int next=0;//������һ�����
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
				 cout<<"ɾ���ڣ�"<<n<<"���ڵ�\n";
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