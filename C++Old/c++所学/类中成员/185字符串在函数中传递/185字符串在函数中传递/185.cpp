#include<iostream>
using namespace std;
int get(const char p[]);
char *set(char*str);
int main()
{
	char ch[15]="hello word";
	//ָ��ָ���Ԫ�ز��ܸı䣬ֻ�ܶ�ȡ
	char *p="very word";
	int a=get(ch);
	int b=get(p);
	cout<<"ch:"<<a<<endl;
	cout<<"*p:"<<a<<endl;
	cin>>ch;
	p=set(ch);
    cout<<"*p:"<<p<<endl;

}
char *set(char*str)
{
	char *p=new char[strlen(str)];
	strcpy(p,str);
	return p;

}
int get(const char p[])
{
	int cout=0;
	while(*p)
	{
		cout++;
		p++;
	}
	return cout;
}

