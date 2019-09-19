#include<iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>
#include <functional>
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
	list<int> ilist;

	inserts<list<int>,int>(ilist,2,7);
    inserts<list<int>,int>(ilist,4,9);
	print<list<int>::iterator>(ilist.begin(),ilist.end());

	//替换
	//把所有的6换成42
	replace(ilist.begin(),ilist.end(),6,42);
	print<list<int>::iterator>(ilist.begin(),ilist.end());

	replace_if(ilist.begin(),ilist.end(),bind2nd(less<int>(),5),100);
	print<list<int>::iterator>(ilist.begin(),ilist.end());

	list<int> ilist2;
	inserts<list<int>,int>(ilist2,2,6);
	inserts<list<int>,int>(ilist2,4,9);
	print<list<int>::iterator>(ilist2.begin(),ilist2.end());

	replace_copy(ilist2.begin(),ilist2.end(),ilist.begin(),5,55);
	print<list<int>::iterator>(ilist.begin(),ilist.end());

	replace_copy_if(ilist2.begin(),ilist2.end(),ilist.begin(),bind2nd(greater<int>(),5),21);
	print<list<int>::iterator>(ilist.begin(),ilist.end());
}