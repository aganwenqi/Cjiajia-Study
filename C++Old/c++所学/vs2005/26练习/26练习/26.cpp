#include<iostream>
using namespace std;
class one
{
public:
	inline void gan(int);
	int wen(){return x;}
private:
	int x;
};
void one::gan(int a){x=a;}

int main()
{
	int x;
	one a;
	cout<<"������һ������"<<"\t"<<endl;
	cin>>x;
	a.gan(x);
	cout<<a.wen()<<endl;
	return 0;
}

