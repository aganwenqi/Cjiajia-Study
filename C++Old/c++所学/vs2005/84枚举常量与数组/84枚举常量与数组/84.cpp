#include<iostream>
using namespace std;
int main()
{
	enum day{mon,tue,wen,thu,fri,sat,sun};
	double eum[sun+1]={80.5,65.2,60.5,45.5,40.2,60.5,80.5};
	int day;
	for(day=mon;day<=sun;day++)
	{//���������ʾc���Ե�scanf���
		cout<<"����"<<day+1<<"�����£�"<<eum[day]<<endl;
	}
}