#include<iostream>
using namespace std;
void show()
{
	int a=1;
		cout<<++a<<"��1���"<<endl;
	cout<<a++<<"�����´����"<<endl;
	cout<<a<<"��������";
}
int main()
{
	int a=2;
	a+=6;//�����a=a+6һ��
	cout<<a<<endl;
	a++;//�Լ�1
	cout<<a<<endl;
	a--;//�Լ�1
	cout<<a<<endl;
	show();
		return 0;
	
}
