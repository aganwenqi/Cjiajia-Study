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
	//->�÷��ű�ʾָ����ʶ����������ݣ�p->set=(*p).set
	//p->set(100);
		cout<<"������з��ʵ����ݳ�Ա\n";
		cout<<p->get()<<endl;
  delete p;

	return 0;
}
gan::gan()
{
	i=new int(999);
	cout<<"���캯��\n"<<endl;
}
gan::~gan()
{delete i;cout<<"������������....\n";}