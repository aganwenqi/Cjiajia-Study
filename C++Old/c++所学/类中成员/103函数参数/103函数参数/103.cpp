#include<iostream>
using namespace std;
void gan(float &x,float &y){x=100,y=1000;cout<<x<<y<<endl;};
void wen(float &x,float &y){x=200,y=2000;cout<<x<<y<<endl;};
typedef void (*p)(float &x,float &y);
void print(p vp,float &x,float &y)
{
	cout<<"x:"<<x<<"y"<<endl;
	vp(x,y);
}
int main()
{
	p vp;
	float a=3,b=4;
	vp=gan;
	vp(a,b);
	vp=wen;
	vp(a,b);
	print(vp,a,b);
	


}
