#include<iostream>
using namespace std;
//��������ռ䣬������һ����ֻ�����ĳ�Ա�ǹ��еģ�û��˽�г�Ա
struct book
{
	int num;
	float weiter;
	//ÿ��������һ���Լ���ָ�룬��Ҳ��ָ����һλ��ַ��ָ��
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
	//������ͷ������ͷ��ַһͬ����oneָ��
	one=&a;
	//��������
	a.next=&b;
	b.next =&c;
	//NULL��ʾ��β
	c.next=NULL;
	//�ѱ�ͷָ���ַ��ָ��p
	p=one;
	while(p!=NULL)
	{
		cout<<p->num <<endl<<p->weiter <<endl;
		//һֱָ����һ����ַ��ֱ����β
		p=p->next;
	}

}
