#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1="dsrfgdhsiufhsd";
	char ch[20]="dsfghdsgfdsfk";
	char ch1[]="123456";
	cout<<"ch"<<ch<<endl;
	//��ch1��ǰ��6���ַ���ֵ��ch
	memmove(ch,ch1,6);
	cout<<"ch"<<ch<<endl;
	cout<<"����ǰ��"<<str1<<endl;
	//copyΪstring��Ŀ�����������str1�ĵ�2��Ԫ�ؿ�ʼ��6��Ԫ�ؿ�����ch1�ַ���
     int n=str1.copy(ch1,6,1);
	 cout <<"�����ˣ�"<<n<<endl;
	 cout<<"������"<<ch1<<endl;

}