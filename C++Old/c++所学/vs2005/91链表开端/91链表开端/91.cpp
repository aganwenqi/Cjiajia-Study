#include<iostream>
using namespace std;
//创建链表空间，它与类一样，只是他的成员是公有的，没有私有成员
struct book
{
	int num;
	float weiter;
	//每个链表都有一个自己的指针，它也是指向下一位地址的指针
	struct book*next;
};
void main()
{
	book a,b,c,*one,*p;
	a.num=1000;
	a.weiter =32.5f;
	b.num=2000;
	b.weiter =45.3f;
	c.num =3000;
	c.weiter =55.4f;
	//创建表头，并把头地址一同放在one指针
	one=&a;
	//依次链表
	a.next=&b;
	b.next =&c;
	//NULL表示表尾
	c.next=NULL;
	//把表头指针地址给指针p
	p=one;
	while(p!=NULL)
	{
		cout<<p->num <<endl<<p->weiter <<endl;
		//一直指向下一个地址，直到结尾
		p=p->next;
	}

}
