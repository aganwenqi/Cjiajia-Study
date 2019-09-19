#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1="dsrfgdhsiufhsd";
	char ch[20]="dsfghdsgfdsfk";
	char ch1[]="123456";
	cout<<"ch"<<ch<<endl;
	//把ch1的前面6个字符赋值给ch
	memmove(ch,ch1,6);
	cout<<"ch"<<ch<<endl;
	cout<<"拷贝前："<<str1<<endl;
	//copy为string类的拷贝函数，把str1的第2个元素开始的6个元素拷贝给ch1字符串
     int n=str1.copy(ch1,6,1);
	 cout <<"拷贝了："<<n<<endl;
	 cout<<"拷贝后："<<ch1<<endl;

}