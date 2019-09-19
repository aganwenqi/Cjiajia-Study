#include<iostream>
using namespace std;
int main()
{
	double *p;
	//定义double类型堆，并使指针p访问该堆
	p=new double;
	*p=1.623;
	cout<<*p<<endl;
	delete p;//删除指针的数据
  cout<<"随机数据"<<*p<<endl;
    *p=0;
	p=new double;
	*p=2.123;
	cout<<*p<<endl;
	delete p;
	
	return 0;
}

	