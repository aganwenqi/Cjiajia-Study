#include<iostream>
using namespace std;
class gan
{
public:
	int get()const{return *i;}
	void set(int x){*i=x;}
		
	gan();
	
	~gan();
private:
	int *i;
	
};
int main()
{
	gan *p=new gan;
	//->该符号表示指针访问堆中类中数据，p->set=(*p).set
	//p->set(100);
		cout<<"输出堆中访问的数据成员\n";
		cout<<p->get()<<endl;
  delete p;

	return 0;
}
gan::gan()
{
	i=new int(999);
	cout<<"构造函数\n"<<endl;
}
gan::~gan()
{delete i;cout<<"析构函数运行....\n";}