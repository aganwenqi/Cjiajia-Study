#include<iostream>
using namespace std;
class gan
{public:
	gan(){sh=0;ch=0;cout<<"���캯��.."<<sh<<"  "<<ch<<endl;}
	~gan(){cout<<"��������.."<<sh<<"  "<<ch<<endl;}
	int get(){return sh*ch;}
	void set(int x,int y){sh=x;ch=y;}
private:
	int sh;
	int ch;
};
int main()
{//��������aָ��ָ����׵����������һ������ĵ�ַ��Ҳ����gan[1]
	gan *a=new gan[4];
	for(int i=0;i<4;i++)
	{
	a[i].set(1+i,2+i);
	}
	for(int i=0;i<4;i++)
	{
		cout<<i+1<<"="<<(a+i)->get()<<endl;
	}
	a[2].set(20,5);
	cout<<"2="<<a[2].get()<<endl;
	cout<<"1="<<a->get()<<endl;

    //��ʾɾ������׵���������
		delete []a;


}