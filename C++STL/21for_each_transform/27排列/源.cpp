#include <iostream>
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
void main()
{
	vector<int> ivec;
	inserts<vector<int>>(ivec,1,3);
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	//顺序排列组合
	next_permutation(ivec.begin(),ivec.end());
	print<vector<int>::iterator>(ivec.begin(),ivec.end());
	//逆序排列组合
	prev_permutation(ivec.begin(),ivec.end());
	print<vector<int>::iterator>(ivec.begin(),ivec.end());
}