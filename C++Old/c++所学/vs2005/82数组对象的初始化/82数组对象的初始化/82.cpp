#include<iostream>
using namespace std;
class gan
{public:
	gan(int x,int y){sh=x;ch=y;cout<<"构造函数.."<<sh<<"  "<<ch<<endl;}
	~gan(){cout<<"析构函数.."<<sh<<"  "<<ch<<endl;}
	int get(){return sh*ch;}
	void set(int x,int y){sh=x;ch=y;}
private:
	int sh;
	int ch;
};
int main()
{
	gan *a[4];
	for(int i=0;i<4;i++)
	{
	a[i]=new gan(1+i,2+i);
	}
	for(int i=0;i<4;i++)
	{
		cout<<i+1<<"="<<a[i]->get()<<endl;
	}
	a[2]->set(20,5);
	cout<<"2="<<a[2]->get()<<endl;
	for(int i=0;i<4;i++)
	{
		delete a[i];
	}

}