#include<iostream>
using namespace std;
int main()
{
	char a[5][5]={"  *   *** ***** ***   *   "};
	for(int x=0;x<5;x++)
	{
		for(int y=0;y<5;y++)
		{
			cout<<a[x][y];
		}
		cout<<endl;
	}
}