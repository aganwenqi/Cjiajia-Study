#include "String.h"
int main()
{
	String s;
	cout<<s<<endl;
	cout<<s.lenght()<<endl;
	s="hello word";
	cout<<"�ַ�������:"<<s.lenght()<<"�ַ�����"<<s<<endl;
	String s1("good bye");
	cout<<"�ַ�������:"<<s1.lenght()<<"�ַ�����"<<s1<<endl;
	s1=s;
	cout<<"�ַ�������:"<<s1.lenght()<<"�ַ�����"<<s1.getstr()<<endl;
	cin>>s1[999];
    cout<<"�ַ�������:"<<s1.lenght()<<"�ַ�����"<<s1.getstr()<<endl;
	cout<<"s1[999]:"<<s1[999]<<endl;
    String s2=s1;
	cout<<"�ַ�������:"<<s2.lenght()<<"�ַ�����"<<s2.getstr()<<endl;
	cin>>s2;
	cout<<"�ַ�������:"<<s2.lenght()<<"�ַ�����"<<s2<<endl;
	int ch=s1<s2;
	cout<<"s1:s2="<<ch<<endl;
	cout<<"�ǳ���...."<<endl;
	s=s1+s2;
	cout<<s<<endl;
	cout<<"�ӵ�"<<endl;
	s+=s1;
	cout<<s<<endl;
}