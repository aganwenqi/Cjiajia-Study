#include<iostream>
using namespace std;
void gan(int *a,int *b)
{int c;
cout<<"��������ǰ";
cout<<"a:"<<*a<<"\t"<<"b:"<<*b<<endl;
c=*a;
*a=*b;
*b=c;
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
//��x��y�ĵ�ַ����ȥ
	gan(&a,&b);
cout<<"�������ַ��ֵ���������ֵ";
cout<<"a:"<<a<<"\t"<<"b:"<<b<<endl;
return 0;
}