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
//�ж��ǲ�������
bool check(string str)
{/*lenght()�����ַ�������*/
	for(int i=0;i<str.length();i++)
	{if((str[i]>'9'||str[i]<'0')&&(str[i]!='.'))
	return false;
	}
	return true;
}

book*head;
//¼��ͼ��
book*creat()
{   if(c!=1){cout<<"    �������Ѿ�¼��һ�Σ������������ѡ����롶��"<<endl;return head;}
	string name,leixing;
	book *p1,*p2;
	p1=new book;
	head=p1;
	p2=p1;
	sl+=1;
	cout<<"������¼��� "<<sl<<" ͼ����,�� * ����- - -������";
	string str;
	cin>>str;
	if(str=="*"){sl-=1;return head;}
	while(!check(str))
	{
		cout<<"������¼��ͼ����- - -������";
		cin>>str;
	}
	p1->num =atoi(str.c_str());
	if(p1->num!=0)
	{
		cout<<"������¼��ͼ��۸�- - -������";
		cin>>str;
		cout<<"������¼��ͼ������- - -������";
		cin>>name;
		cout<<"������¼��ͼ������- - -������";
		cin>>leixing;
	while(!check(str))
	{
		cout<<"������¼��ͼ����- - -������";
			cin>>str;
	}
	/*atof��ʾ���ַ���ת��Ϊfloat�ͣ��������ĸ�����͵Ŀ�ͷ��ĸstr.c_str()��c++�ַ���ת��Ϊc����ģʽ*/
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
	cout<<"������¼���"<<sl<<"ͼ����,�� * �ż�����- - -������";
		cin>>str;
		if(str=="*"){sl-=1;break;}
	while(!check(str))
	{
		cout<<"������¼��ͼ����- - -������";
			cin>>str;
	}
	p1->num =atoi(str.c_str());
	if(p1->num!=0)
	{ 
		cout<<"������¼��ͼ��۸�- - -������";
				cin>>str;
				cout<<"������¼��ͼ�����֣�";
		cin>>name;
		cout<<"������¼��ͼ������- - -������";
		cin>>leixing;
	while(!check(str))
	{
		cout<<"������¼��ͼ����- - -������";
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
cout<<"                             >>>>ͼ���ϵͳ<<<<"<<endl;
cout<<"  ............................................................................"<<endl;
	aixin();
while(1)
{int wen;
	cout<<"    <1>����ͼ��۸�<2>ɾ��ͼ��۸�<3>;�в���ͼ�飬<4>¼��ͼ��,<5>����"<<endl;
      cout<<"                <6>ͼ����鱾������<7>�鿴��Ʒ��Ϣ<0>�˳�"<<endl;
	  cout<<"- - -������";
cin>>wen;
switch(wen)
{
case 1:qiu();fun(head);break;
case 2:qiu();Delete(head);qiu();cout<<endl;break;
case 3:if(c==1){cout<<"���û���飬����Ҫ��¼��"<<endl<<endl;break;}
	     sl+=1;
	   cout<<"�����Ҫ�����ͼ����- - -������"<<endl;
       cin>>bh;
       cout<<"���������ͼ��۸�- - -������"<<endl;
       cin>>ah;
	   cout<<"������¼��ͼ������- - -������";
		cin>>name;
		cout<<"������¼��ͼ������- - -������";
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
cout<<"����"<<endl;
}
//����ͼ��
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
//ɾ��ͼ��
void Delete(book*head)
{  if(c==1){cout<<"�㲻����ɾ��ͼ�飬��Ϊ���û��һ��ͼ��"<<endl;return;}
	book*l;
	string nu;
	cout<<"������Ҫɾ����ͼ����,��*�ż��˳�- - -������";
	  sl-=1;
	cin>>nu;
	if(nu=="*"){return;}
	      int num=atoi(nu.c_str());
	if(head->num==num)
	{  l=head;
          head=head->next;
		  ::head=head;
		  cout<<"�����ɹ�"<<endl;
		  delete l;
		 return;
}
while(head)
{if(head->next==NULL)
{
	cout<<"�Ҳ���Ҫɾ���ı��"<<endl;
	return;
}
if(head->next->num==num)
{     l=head->next;
       head->next=l->next;
	   cout<<"�����ɹ�"<<endl;
	   delete l;
	   return;
}
head=head->next ;
}
cout<<"�Ҳ���Ҫɾ���ı��"<<endl;
}
//����ͼ��
void fun(book*p)
{ if(c==1){cout<<"���ɲ���ͼ�飬�㻹û¼��ͼ��"<<endl<<endl;return;}
	book*p1=NULL,*p2=NULL;
string ab;
	while(1)
{	p1=p;
	cout<<"������ͼ������ʾ�۸�,��*�˳�- - -������";
	cin>>ab;
	if(ab=="*"){break;}
	int as=atoi(ab.c_str());
	while(head)
	{   
		if(p1->num==as )
		{cout<<"ͼ������"<<p1->name<<" ���ͣ�"<<p1->leixing <<" �۸�"<<p1->printf <<endl;break;}
		p2=p1->next;
		p1=p2;
		if(p1==NULL){cout<<"û�и�ͼ�飬����������- - -������"<<endl;break;}
	}
	
	}
}
//��ʾ
void qiu()
{
	book*p1;
	p1=head;
	while(p1)
	{
		cout<<"��ţ�"<<p1->num<<endl;
		p1=p1->next;
	}
}
//��Ʒ��Ϣ
void qi()
{
	cout<<"         ����ƷΪJINqi��һ������ͼ���ϵͳ��ͨ���ý��������������鼮"<<endl;
    cout<<"Ҳ�������˲�Ҫ���飬��Ȼ����ݿ�ҵʱ���������������鼮�������Բ�ѯ����Ϣ��....."<<endl;
	cout<<"                       ����ʱ��1997��12��12��"<<endl<<endl<<endl;
	cout<<"                                                               ��ʼ�ˣ���**"<<endl;
	cout<<"��������˳�- - -������";
	cin.get();
	cin.get();
}
//����
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
//ͼ������
void tushu(book*head)
{int i=0;
	while(head)
	{   i++;
		head=head->next;
	}
	cout<<"�ܹ���- - -������"<<i<<"����"<<endl;
}
