#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"���뿴���Σ�";
	cin>>a;
	b=a;
	//do while�����㿴��������0����������ִ��һ��
	do
	{
		cout<<"���ٿ�"<<endl;
		a--;
	}while(a>0);
	cout<<"�㿴�ˣ�"<<b+1<<"��"<<endl;
	return 0;
}