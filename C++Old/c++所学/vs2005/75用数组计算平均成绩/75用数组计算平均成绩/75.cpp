#define num 10
#include<iostream>
using namespace std;
int main()
{
	int b=0,a[num];
	float check;
	cout<<"请输入各位学生成绩\n";
	for(int i=1;i<num;i++)
	{
		cout<<"第"<<i<<"名猪的成绩=";
		cin>>a[i];
		b=b+a[i];
	}
	check=(float)b/num;
	cout<<"平均成绩="<<check<<endl;
}
		