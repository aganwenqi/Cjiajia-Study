#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1="what you name";
    string str2="my name is wen";
	str1=str1+str2;
	cout<<strlen(str1.c_str())<<endl;
	cout<<str1.size()<<endl;
	cout<<str1.length()<<endl;
	cout<<str1<<endl;
	cout<<str2<<endl;

}
