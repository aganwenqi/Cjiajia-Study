#include<iostream>
#include<string>
using namespace std;
int main()
{
	char ch[15]="ofru";
	char ch1[15]="";
	string str="four";
	string str1="";
	//�����Ļ��԰�Ҳ�ύ��
	swab(ch,ch1,strlen(ch));
	cout<<ch<<endl;
	cout<<ch1<<endl;
	//string �Ľ�����swap���Ҳ���԰뽻����������������
	str.swap(str1);
	cout<<str<<endl;
	cout<<str1<<endl;

}