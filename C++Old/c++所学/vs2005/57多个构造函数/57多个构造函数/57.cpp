#include<iostream>
using namespace std;
class reclangle
{
public:
	reclangle(){cout<<"����һ��������a\n";}
	reclangle(int x,int y){length=x;width=y;cout<<"�����ε����="<<length*width<<endl;}
	reclangle(int x,int y,int z){length=x;width=y;height=z;cout<<"����������="<<length*width*height<<endl;}
	int get(){return length*width;}
private:
	int length;
	int width;
	int height;
};
int main()
{ 

reclangle gan;
   reclangle wen(2,3);
	   reclangle qi(2,3,10);
	   reclangle &a=wen;
	   reclangle*p=&a;
	   cout<<a.get()<<endl;
		return 0;
}