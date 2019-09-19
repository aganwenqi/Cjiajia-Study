#include<iostream>
using namespace std;
class gan
{
public:
	   gan(){cout<<"构造函数执行中"<<endl;}
	   ~gan(){cout<<"析构函数运行"<<endl;}
};
int main()
{
	//在堆中创建对象
    gan *p;
	p=new gan;
	delete p;//删除指针中的对象

		
	
		return 0;
	
}
