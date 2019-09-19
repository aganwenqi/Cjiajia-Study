#include<iostream>
using namespace std;
int main()
{
	string str("hello word");
	//表示查找str中w在哪个位置，0为从0开始找没，没有找到返回npos他等于-1
	int f=str.find('w',0);
	cout<<f<<endl;
	//表示查找第一个与w不同的，查找同的用first_of
     f=str.find_first_not_of('w',0);
	cout<<f<<endl;
	//表示查找与w不相同的最后一个
     f=str.find_last_not_of('w');
	cout<<f<<endl;
//find前面加r表示反向查找
}