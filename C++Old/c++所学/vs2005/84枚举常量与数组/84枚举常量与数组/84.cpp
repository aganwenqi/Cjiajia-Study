#include<iostream>
using namespace std;
int main()
{
	enum day{mon,tue,wen,thu,fri,sat,sun};
	double eum[sun+1]={80.5,65.2,60.5,45.5,40.2,60.5,80.5};
	int day;
	for(day=mon;day<=sun;day++)
	{//下面的语句表示c语言的scanf语句
		cout<<"星期"<<day+1<<"的气温："<<eum[day]<<endl;
	}
}