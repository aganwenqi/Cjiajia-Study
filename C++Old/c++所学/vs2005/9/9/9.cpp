#include<iostream>
using namespace std;
void swap(int ,int );
int x=300,y=400;
{
	cout<<x<<" "<<y<<endl;
}
int main()
{
	int x=3,y=4;
	cout<<"掉换前"<<"x="<<x<<" "<<"y="<<y<<endl;
    swap(x,y);
	cout<<"局部不影响这步"<<"x="<<x<<" "<<"y="<<y<<endl;
	
}
void swap(int x,int y)
{cout<<"掉换前"<<"x="<<x<<" "<<"y="<<y<<endl;
   int z;
   z=x;
   x=y;
   y=z;
   cout<<"掉换后"<<"x="<<x<<" "<<"y="<<y<<endl;
	
}
