#include<iostream>
#include<string>
using namespace std;
string &show( string &one);
int main()
{
	string str="hello";
	string str1=show(str);
	cout<<"str1:"<<str1<<endl;

}
string &show(string &one)
{
	cout<<"one:"<<one<<endl;
	return one;
}