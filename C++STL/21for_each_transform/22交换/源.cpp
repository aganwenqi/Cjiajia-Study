#include<iostream>
#include <algorithm>
#include <vector>
#include <deque>

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
bool swap_one(int elem1,int elem2)
{
}
void main()
{
	vector<int> ivec;
	deque<int> ideq;

	inserts<vector<int>,int>(ivec,1,9);
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	inserts<deque<int>,int>(ideq,11,23);
	print<deque<int>::iterator>(ideq.begin(),ideq.end());

	//交换,返回值是第二个区间没交换数的开头，不等于end()说明第二个区间还有数据没交换
	deque<int>::iterator pos;
	pos=swap_ranges(ivec.begin(),ivec.end(),ideq.begin());
	print<deque<int>::iterator>(ideq.begin(),ideq.end());


}