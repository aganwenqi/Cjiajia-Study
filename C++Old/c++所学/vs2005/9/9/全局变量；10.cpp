#include<iostream>
using namespace std;
void swap(int ,int );
//�ñ���Ϊȫ�ֱ���
int x=300,y=400;
int main()
{
//int x=3,y=4;Ϊ�ֲ�����
	int x=3,y=4;
	cout<<"����ǰ"<<"x="<<x<<" "<<"y="<<y<<endl;
    swap(x,y);
	cout<<"�ֲ���Ӱ���ⲽ"<<"x="<<x<<" "<<"y="<<y<<endl;
	
}
void swap(int x,int y)
{cout<<"����ǰ"<<"x="<<x<<" "<<"y="<<y<<endl;
   int z;
   z=x;
   x=y;
   y=z;
   cout<<"������"<<"x="<<x<<" "<<"y="<<y<<endl;
	
}
