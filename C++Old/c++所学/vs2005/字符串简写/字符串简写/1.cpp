#include<iostream>
using namespace std;
int main()
{
	char a[12]={"ABCDEFIJKl"};
//�ַ������Բ�ʹ��ѭ�������ֱ�������\0��ʾ���������ʱ����
	//����ַ�������ֱ�Ӽ���a
	cout<<a<<endl;
	//����ֱ�������ַ����������������벻�Ͽո�
	//cin>>a;
	//cout<<a<<endl;
	//���������ո�
	gets(a);
		cout<<a<<endl;
		//�������������ʾ�޶������a������������飬12������������ĸ���
		cin.get(a,12);
		cout<<a<<endl;

}