#include<iostream>
#include<string>
using namespace std;
int main()
{
	char ch[15]="ofru";
	char ch1[15]="";
	string str="four";
	string str1="";
	//交换的话对半也会交换
	swab(ch,ch1,strlen(ch));
	cout<<ch<<endl;
	cout<<ch1<<endl;
	//string 的交换是swap，且不会对半交换，而是完整掉换
	str.swap(str1);
	cout<<str<<endl;
	cout<<str1<<endl;

}