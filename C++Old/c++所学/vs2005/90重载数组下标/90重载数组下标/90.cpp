#include<iostream>
using namespace std;
class A
{
public:
	A(int i){lenght=i;size=new char[lenght];}
    ~A(){delete []size;}
	int get(){return lenght;}
	char&operator[](int y)
	{
		if(y>=0&&y<lenght)
		{
			return size[y];
		}
		else
		{cout<<"³¬³ö·¶Î§"<<endl;
		return size[y-1];
		}
	}
private:
	int lenght;
	char *size;
};
int main()
{A a(6);
char *ch="ganwenqi";
for(int x=0;x<8;x++)
{
	a[x]=ch[x];
}
cout<<endl;
for(int x=0;x<8;x++)
{cout<<a[x];
}
}