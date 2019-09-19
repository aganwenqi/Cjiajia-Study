#include<iostream>
using namespace std;
class gan
{
public:
	gan(int x,int y){chang=x;kuan=y;}
	gan(){cout<<"构造函数在运行..."<<endl;}
	~gan();
	int wen(){return chang*kuan;}
private:
	int chang;
	int kuan;
};
gan::~gan(){cout<<".......";}
int main()
{
	gan qi(2,3);
		cout<<"长方形面积="<<qi.wen()<<endl;
	gan qiu;
	//因为没有给它值，所以系统随机给了一个
	cout<<"长方形面积="<<qiu.wen()<<endl;
	return 0;
}
