#include<iostream>
using namespace std;
class lei
{
public:
	void diaoyong(int x)
	{
		if(x>1&&x<100)
		{				
		weight=x;}
		else
		{cout<<"������1��100������"<<endl;
		weight=0;}
	}
	int show(){return weight;}//˽�з���
private:
	int weight;
};

int main()
{
	lei gan;

	gan.diaoyong (100);
		cout<<"gan������Ϊ��  "<<gan.show()<<endl;
	lei qiu;
	qiu.diaoyong (95);
		cout<<"qiu������Ϊ��  "<<qiu.show()<<endl;
	return 0;
}

