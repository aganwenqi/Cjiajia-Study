#include<iostream>
using namespace std;
int main()
{
	int a,b;
	b=0;
	//1��������ѭ��
	while(1)
	{
		cout<<"������һ��������";
		cin>>a;
		cout<<"�����Ϊ��"<<a<<endl;
        b++;
		if(b>3)
		{break;
		cout<<"����"<<endl;}
	}
cout<<"ִ�д�����"<<b<<endl;
	return 0;
}