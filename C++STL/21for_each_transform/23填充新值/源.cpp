#include<iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>
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
int ah(void)
{
	return false;
}
void main()
{
	list<string> ilist;
	ilist.push_back("sdfs");
	ilist.push_back("sdfs23fs");
	ilist.push_back("333sf");
	print<list<string>::iterator>(ilist.begin(),ilist.end());

	fill(ilist.begin(),ilist.end(),"hao");
	print<list<string>::iterator>(ilist.begin(),ilist.end());

	//可用函数对象填充
	list<int>slist;
	generate_n(back_inserter(slist),5,rand);

	print<list<int>::iterator>(slist.begin(),slist.end());

	generate(slist.begin(),slist.end(),ah);
	print<list<int>::iterator>(slist.begin(),slist.end());
}