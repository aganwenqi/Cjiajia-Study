#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1="123";
	string s2="32";
	char ch[]="22";
	int i,j,k,s,n;
	//返回0表示相等，返回1表示s1大于s2，返回-1表示s1小于s2
	i=s1.compare(s2);
	cout<<i<<endl;
	j=s2.compare(ch);
	cout<<j<<endl;
	//表示从s1的0到2的坐标的数跟s2比
	k=s1.compare(0,2,s2);
	cout<<k<<endl;
		s=s1.compare(0,2,s2,0,1);
	cout<<s<<endl;
		n=s1.compare(0,2,ch,0,1);//n=s1.compare(0,2,ch,0,1)=n=s1.compare(0,2,ch,1)
	cout<<n<<endl;
}