#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;
void main()
{
	list<int> ilist;
	ilist.push_back(10);
	ilist.push_back(20);
	ilist.push_back(30);
	cout<<"容器里的数据的个数:"<<ilist.size()<<endl;
	list<int>::size_type count=ilist.size();
	cout<<"容器里的数据的个数:"<<count<<endl;
	cout<<"ilist.max_size():"<<ilist.max_size()<<endl;

	//调整容器的大小变成10个
	ilist.resize(10);
	ilist.resize(20,1);//表示新增加的数据用1来填充

}