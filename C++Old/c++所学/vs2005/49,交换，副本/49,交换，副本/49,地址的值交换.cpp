#include<iostream>
using namespace std;
void gan(int *a,int *b)
{int d;
cout<<"��������ǰ";
cout<<"a:"<<*a<<"\t"<<"b:"<<*b<<endl;
d=*a;
*a=*b;
*b=d;
cout<<"����������";
cout<<"a:"<<*a<<"\t"<<"b:"<<*b<<endl;
}
int main()
{
	int a,b;
	a=3;
	b=4;
	cout<<"�����ֵ";
cout<<"a:"<<a<<"\t"<<"b:"<<b<<endl;
//��a��b�ĵ�ַ����ȥ
	gan(&a,&b);
cout<<"�������ַ��ֵ���������ֵ";
cout<<"a:"<<a<<"\t"<<"b:"<<b<<endl;
return 0;
}