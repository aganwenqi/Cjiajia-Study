#include<iostream>
using namespace std;
int main()
{
	string str("hello word");
	//��ʾ����str��w���ĸ�λ�ã�0Ϊ��0��ʼ��û��û���ҵ�����npos������-1
	int f=str.find('w',0);
	cout<<f<<endl;
	//��ʾ���ҵ�һ����w��ͬ�ģ�����ͬ����first_of
     f=str.find_first_not_of('w',0);
	cout<<f<<endl;
	//��ʾ������w����ͬ�����һ��
     f=str.find_last_not_of('w');
	cout<<f<<endl;
//findǰ���r��ʾ�������
}