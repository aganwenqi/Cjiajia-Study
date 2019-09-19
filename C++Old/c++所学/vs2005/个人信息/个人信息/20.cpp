#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int c=1,sl=0;
class book
{
public:
	int num;
	float printf;
	string name;
	string leixing;
	book*next;
};
//判断是不是数字
bool check(string str)
{/*lenght()返回字符串长度*/
	for(int i=0;i<str.length();i++)
	{if((str[i]>'9'||str[i]<'0')&&(str[i]!='.'))
	return false;
	}
	return true;
}

book*head;
//录入图书
book*creat()
{   if(c!=1){cout<<"    》》你已经录入一次，如想添加书请选择插入《《"<<endl;return head;}
	string name,leixing;
	book *p1,*p2;
	p1=new book;
	head=p1;
	p2=p1;
	sl+=1;
	cout<<"请输入录入第 "<<sl<<" 图书编号,按 * 返回- - -》》》";
	string str;
	cin>>str;
	if(str=="*"){sl-=1;return head;}
	while(!check(str))
	{
		cout<<"请输入录入图书编号- - -》》》";
		cin>>str;
	}
	p1->num =atoi(str.c_str());
	if(p1->num!=0)
	{
		cout<<"请输入录入图书价格- - -》》》";
		cin>>str;
		cout<<"请输入录入图书名字- - -》》》";
		cin>>name;
		cout<<"请输入录入图书类型- - -》》》";
		cin>>leixing;
	while(!check(str))
	{
		cout<<"请输入录入图书编号- - -》》》";
			cin>>str;
	}
	/*atof表示把字符串转换为float型，最后面字母是类型的开头字母str.c_str()把c++字符串转换为c语言模式*/
	p1->printf  =atof(str.c_str());
	p1->name  =name;
	p1->leixing  =leixing;
	}
	else
	{ 
		delete p1;p2=NULL;p2->next=NULL;head=NULL;return head;
	}

	while(p1->num!=0)
	{  c=c+1;
			p2=p1;
			p1=new book;
			  sl+=1;
	cout<<"请输入录入第"<<sl<<"图书编号,按 * 号键结束- - -》》》";
		cin>>str;
		if(str=="*"){sl-=1;break;}
	while(!check(str))
	{
		cout<<"请输入录入图书编号- - -》》》";
			cin>>str;
	}
	p1->num =atoi(str.c_str());
	if(p1->num!=0)
	{ 
		cout<<"请输入录入图书价格- - -》》》";
				cin>>str;
				cout<<"请输入录入图书名字：";
		cin>>name;
		cout<<"请输入录入图书类型- - -》》》";
		cin>>leixing;
	while(!check(str))
	{
		cout<<"请输入录入图书编号- - -》》》";
			cin>>str;
	}
	p1->printf=atof(str.c_str());
	p1->name  =name;
	p1->leixing  =leixing;	
	}
      p2->next =p1;
	}
	delete p1;
	p2->next=NULL;
	return head;
}
void fun(book*);
void Delete(book*);
void man(book*,int ,float ,string ,string );
void qiu();
void qi();
void aixin();
void tushu(book*);
void main()
{  string name,leixing;
	float ah;
int bh;
book*p1=NULL,*p2=NULL,*p3=NULL;
cout<<"                             >>>>图书馆系统<<<<"<<endl;
cout<<"  ............................................................................"<<endl;
	aixin();
while(1)
{int wen;
	cout<<"    <1>查找图书价格，<2>删除图书价格，<3>途中插入图书，<4>录入图书,<5>清屏"<<endl;
      cout<<"                <6>图书馆书本数量，<7>查看产品信息<0>退出"<<endl;
	  cout<<"- - -》》》";
cin>>wen;
switch(wen)
{
case 1:qiu();fun(head);break;
case 2:qiu();Delete(head);qiu();cout<<endl;break;
case 3:if(c==1){cout<<"书库没有书，你需要先录入"<<endl<<endl;break;}
	     sl+=1;
	   cout<<"请插入要插入的图书编号- - -》》》"<<endl;
       cin>>bh;
       cout<<"请插入插入的图书价格- - -》》》"<<endl;
       cin>>ah;
	   cout<<"请输入录入图书名字- - -》》》";
		cin>>name;
		cout<<"请输入录入图书类型- - -》》》";
		cin>>leixing;
       man(head,bh,ah,name,leixing);
       qiu();break;
       case 4:p3=creat();break;
	   case 5:system("cls");break;
	   case 6:tushu(head);break;
	   case 7:qi();break;
	   default:goto loop;break;
}
}
loop:
cout<<"结束"<<endl;
}
//插入图书
void man(book*head,int num,float printf,string name,string leixing)
{ 
	book*list=new book;
	list->num=num;
	list->printf=printf;
	list->name=name;
	list->leixing=leixing;
	/*if(num<=head->num)
	{*/
	     list->next =head;
		 ::head=list;
		 return;
	/*}
	book*gan=new book;
	while((num>head->num )&&(head->next!=NULL))
	{
          gan=head;
		  head=head->next;
		if(num>head->num )
		{        head->next =list;
		            list->next=NULL;
		}
		else{
			  gan->next =list;
			  list->next =head;
		}
	}*/

}
//删除图书
void Delete(book*head)
{  if(c==1){cout<<"你不可以删除图书，因为书库没有一个图书"<<endl;return;}
	book*l;
	string nu;
	cout<<"请输入要删除的图书编号,按*号键退出- - -》》》";
	  sl-=1;
	cin>>nu;
	if(nu=="*"){return;}
	      int num=atoi(nu.c_str());
	if(head->num==num)
	{  l=head;
          head=head->next;
		  ::head=head;
		  cout<<"操作成功"<<endl;
		  delete l;
		 return;
}
while(head)
{if(head->next==NULL)
{
	cout<<"找不到要删除的编号"<<endl;
	return;
}
if(head->next->num==num)
{     l=head->next;
       head->next=l->next;
	   cout<<"操作成功"<<endl;
	   delete l;
	   return;
}
head=head->next ;
}
cout<<"找不到要删除的编号"<<endl;
}
//查找图书
void fun(book*p)
{ if(c==1){cout<<"不可查找图书，你还没录入图书"<<endl<<endl;return;}
	book*p1=NULL,*p2=NULL;
string ab;
	while(1)
{	p1=p;
	cout<<"请输入图书编号显示价格,按*退出- - -》》》";
	cin>>ab;
	if(ab=="*"){break;}
	int as=atoi(ab.c_str());
	while(head)
	{   
		if(p1->num==as )
		{cout<<"图书名："<<p1->name<<" 类型："<<p1->leixing <<" 价格："<<p1->printf <<endl;break;}
		p2=p1->next;
		p1=p2;
		if(p1==NULL){cout<<"没有该图书，请重新输入- - -》》》"<<endl;break;}
	}
	
	}
}
//显示
void qiu()
{
	book*p1;
	p1=head;
	while(p1)
	{
		cout<<"编号："<<p1->num<<endl;
		p1=p1->next;
	}
}
//产品信息
void qi()
{
	cout<<"         本产品为JINqi第一代智能图书馆系统，通过该界面可以买入各种书籍"<<endl;
    cout<<"也可以卖了不要的书，当然再书馆开业时还可以买卖各类书籍，还可以查询书信息等....."<<endl;
	cout<<"                       发布时间1997年12月12日"<<endl<<endl<<endl;
	cout<<"                                                               创始人：甘**"<<endl;
	cout<<"按任意键退出- - -》》》";
	cin.get();
	cin.get();
}
//爱心
void aixin()
{
     
	char ch[]={3,3,'\0'};
int a,e,i,b=6,f=1,q=b+(b-1)*2,d=7;
float c=20;
cout<<setw(c+3)<<ch<<setw(q+d)<<ch<<endl;
			for(e=1;e<b;e++)
			{cout<<setw(c)<<ch<<setw(d)<<ch<<setw(q)<<ch<<setw(d)<<ch<<endl;
			f=f+1;c=c-3;d=d+6;q=q-6;
			for(i=1;i<f;i++)
			{c=c+0.5;	d=d-1;q=q+1;}	}
			c=c+0.5;
       cout<<setw(c)<<ch<<setw(d)<<ch<<setw(d)<<ch<<endl;
	   a=c;a=a+1;d=d*2-2;
	   for(c=c-1;c>1;c--)
	   {	cout<<setw(a)<<ch<<setw(d)<<ch<<endl;
	       a=a+2;d=d-4;
		   if(c==2){cout<<setw(a-1)<<ch<<endl;}}

}
//图书数量
void tushu(book*head)
{int i=0;
	while(head)
	{   i++;
		head=head->next;
	}
	cout<<"总共有- - -》》》"<<i<<"本书"<<endl;
}
