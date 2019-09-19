#include<iostream>
using namespace std;
int get(const char p[]);
char *set(char*str);
int main()
{
	char ch[15]="hello word";
	//指针指向的元素不能改变，只能读取
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

