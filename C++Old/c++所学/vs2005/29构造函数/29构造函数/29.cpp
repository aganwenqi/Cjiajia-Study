#include<iostream>
using namespace std;
class gan
{
public:
	gan(int x,int y){chang=x;kuan=y;}
	gan(){cout<<"���캯��������..."<<endl;}
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
		cout<<"���������="<<qi.wen()<<endl;
	gan qiu;
	//��Ϊû�и���ֵ������ϵͳ�������һ��
	cout<<"���������="<<qiu.wen()<<endl;
	return 0;
}
