#include<iostream>
using namespace std;
class lei
{
public:
	void gan(int x,int y){i=x;j=y;}
	void wen()const{cout<<"两数相乘  "<<i*j<<endl;}
private:
	int i;
	int j;
};
int main()
{
	cout<<"请输入两个整数"<<endl;
	int x;
	int y;
	lei qi;
	cin>>x;
	cin>>y;
	qi.gan(x,y);
	qi.wen ();
	cout<<"请再次输入两个整数"<<endl;
	lei qiu;
	cin>>x;
	cin>>y;
	qiu.gan(x,y);
		qiu.wen ();
		return 0;
}
