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
	deque<int> ideq;

	inserts<deque<int>>(ideq,3,7);
	inserts<deque<int>>(ideq,2,6);
	inserts<deque<int>>(ideq,1,5);

	print<deque<int>::iterator>(ideq.begin(),ideq.end());

	nth_element(ideq.begin(),ideq.end()-7,ideq.end());
	print<deque<int>::iterator>(ideq.begin(),ideq.end());
}