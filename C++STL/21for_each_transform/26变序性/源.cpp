#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <list>
#include <set>
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
void one()
{
	vector<int> ivec,iveb(10);
	inserts<vector<int>>(ivec,1,9);
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	reverse(ivec.begin(),ivec.end());
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	reverse_copy(ivec.begin(),ivec.end(),iveb.begin());
	print<vector<int>::iterator>(iveb.begin(),iveb.end());

	rotate(ivec.begin(),ivec.begin()+1,ivec.end());
	print<vector<int>::iterator>(ivec.begin(),ivec.end());
}
void two()
{
	set<int> iset;

	for(int i=1;i<=9;++i)
		iset.insert(i);
	print<set<int>::iterator>(iset.begin(),iset.end());

	set<int>::iterator pos=iset.begin();
	advance(pos,1);

}
void main()
{
	two();
}