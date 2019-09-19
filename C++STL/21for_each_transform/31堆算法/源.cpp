#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <list>
#include <set>
#include <deque>
#include <string>
using namespace std;
template <class T>
void print(const T& s,const T& a)
{
	for(T iter=s;
		iter!=a;++iter)
		cout<<*iter<< " ";
	cout<<endl;
}
template <class T,class S>
void inserts(T &t,S s,const S e)
{
	for(S a=s;a<=e;a++)
		t.push_back(a);
}
void main()
{
	vector<int> ivec;

	inserts<vector<int>>(ivec,3,7);
	inserts<vector<int>>(ivec,5,9);
	inserts<vector<int>>(ivec,1,4);
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	//变成堆
	make_heap(ivec.begin(),ivec.end());
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	//把最大的放最后面
	pop_heap(ivec.begin(),ivec.end());
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	ivec.push_back(17);
	//push_heap(ivec.begin(),ivec.end());
	//把新的加入堆
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	//把堆变成普通的排序
	//sort_heap(ivec.begin(),ivec.end());
	print<vector<int>::iterator>(ivec.begin(),ivec.end());
}