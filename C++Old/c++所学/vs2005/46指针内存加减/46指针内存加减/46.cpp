#include<iostream>
using namespace std;
int main()
{
	int *p=new int;
	p=0;
	cout<<"ָ���ʼ��ַ��"<<p<<endl;
	p++;
	cout<<"ָ���Լ�1���ַ��"<<p<<endl;
	p--;
	cout<<"ָ���Լ�1���ַ��"<<p<<endl;
	p=p-2;
	cout<<"ָ���2���ַ��"<<p<<endl;
	cout<<"ָ���ַ��һ��������ȡ�������ַ�"<<endl;
	int *p1=new int;
	p=p1;
	cout<<"ָ��ĸ�ֵ����\n";
	cout<<"p1�ĵ�ַΪ"<<p1<<endl;
	cout<<"p�ĵ�ַΪ"<<p<<endl;
	*p=p-p1;
	cout<<"�"<<*p<<endl;
	if(p==p1)
	{
		cout<<"���ǵ�ַ���\n";
	}
	return 0;
}