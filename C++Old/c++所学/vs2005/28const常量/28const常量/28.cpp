#include<iostream>
using namespace std;
class lei
{
public:
	void gan(int x,int y){i=x;j=y;}
	void wen()const{cout<<"�������  "<<i*j<<endl;}
private:
	int i;
	int j;
};
int main()
{
	cout<<"��������������"<<endl;
	int x;
	int y;
	lei qi;
	cin>>x;
	cin>>y;
	qi.gan(x,y);
	qi.wen ();
	cout<<"���ٴ�������������"<<endl;
	lei qiu;
	cin>>x;
	cin>>y;
	qiu.gan(x,y);
		qiu.wen ();
		return 0;
}
