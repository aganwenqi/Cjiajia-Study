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
		{cout<<"请输入1到100的整数"<<endl;
		weight=0;}
	}
	int show(){return weight;}//私有返回
private:
	int weight;
};

int main()
{
	lei gan;

	gan.diaoyong (100);
		cout<<"gan的体重为：  "<<gan.show()<<endl;
	lei qiu;
	qiu.diaoyong (95);
		cout<<"qiu的体重为：  "<<qiu.show()<<endl;
	return 0;
}

