#include<iostream>
using namespace std;
class gan
{
public:
	inline void wen(int);
	int qi(){return x;}
private:
	int x;
	};
	void gan::wen(int a){x=a;}


int main()
{
	gan a;
	int x;
	cout<<"请输入一个整数  "<<endl;
	cin>>x;
		a.wen(x);
		cout<<a.qi ()<<endl;
	return 0;
}


