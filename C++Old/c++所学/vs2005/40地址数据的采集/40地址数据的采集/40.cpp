#include<iostream>
using namespace std;
int main()
{
	typedef unsigned short int ab;
	ab a=5;
	ab c=2;
	ab *b=0;
	b=&a;
	cout<<"b��ַΪ�� "<<b<<endl;
	cout<<"b����λ�� "<<*b<<endl;
	cout<<"a��ַΪ�� "<<&a<<endl;
	cout<<"a����λ�� "<<a<<endl;
	//��ָ���޸Ĵ����a�е�����
	*b=a+90;
	cout<<"ָ������Ϊ��"<<*b<<endl;
	cout<<"a������Ϊ��"<<a<<endl;
	//��a���޸Ĵ����ָ�������
	a=*b+10;
     	cout<<"ָ������Ϊ��"<<*b<<endl;
	cout<<"a������Ϊ��"<<a<<endl;
	//������ַ
	b=&c;
cout<<"b��ַΪ�� "<<b<<endl;
	cout<<"b����λ�� "<<*b<<endl;
	cout<<"c��ַΪ�� "<<&c<<endl;
	cout<<"c����λ�� "<<c<<endl;
	return 0;
}