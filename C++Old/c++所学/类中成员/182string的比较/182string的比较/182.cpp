#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1="123";
	string s2="32";
	char ch[]="22";
	int i,j,k,s,n;
	//����0��ʾ��ȣ�����1��ʾs1����s2������-1��ʾs1С��s2
	i=s1.compare(s2);
	cout<<i<<endl;
	j=s2.compare(ch);
	cout<<j<<endl;
	//��ʾ��s1��0��2�����������s2��
	k=s1.compare(0,2,s2);
	cout<<k<<endl;
		s=s1.compare(0,2,s2,0,1);
	cout<<s<<endl;
		n=s1.compare(0,2,ch,0,1);//n=s1.compare(0,2,ch,0,1)=n=s1.compare(0,2,ch,1)
	cout<<n<<endl;
}