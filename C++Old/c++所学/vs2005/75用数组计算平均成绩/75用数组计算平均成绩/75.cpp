#define num 10
#include<iostream>
using namespace std;
int main()
{
	int b=0,a[num];
	float check;
	cout<<"�������λѧ���ɼ�\n";
	for(int i=1;i<num;i++)
	{
		cout<<"��"<<i<<"����ĳɼ�=";
		cin>>a[i];
		b=b+a[i];
	}
	check=(float)b/num;
	cout<<"ƽ���ɼ�="<<check<<endl;
}
		