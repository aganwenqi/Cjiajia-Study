#include<iostream>
using namespace std;
int main()
{
	char gan='u';
	while(gan=='u'||gan=='U')
	{
		cout<<"12345����ɽ���ϻ�"<<endl;
		cout<<"�ٿ�һ���밴u������������"<<endl;
		cin>>gan;
	}
	cout<<"����\n";
	cout<<"�ϻ����������뿴����?"<<endl;
	cout<<"���������";
	int a,b;
	a=0;
	cin>>b;
	while(a<b)
	{
		cout<<"�ϻ�������"<<endl;
		a++;
	}
	cout<<"����";

	return 0;
}