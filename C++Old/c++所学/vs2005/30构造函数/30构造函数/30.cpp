#include<iostream>
using namespace std;
class gan
{
public:
	gan();
	~gan();
};
gan::gan(){cout<<"构造函数运行"<<endl;}
gan::~gan (){cout<<"析构函数运行"<<endl;}
int main()
{
	gan a[2];
	cout<<"0000000000"<<endl;
gan b[3];
	return 0;
}