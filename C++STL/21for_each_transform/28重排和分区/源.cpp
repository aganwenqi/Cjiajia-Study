#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <set>
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
//重排
void one()
{
	vector<int> ivec;

	inserts<vector<int>>(ivec,1,9);
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	//打乱
	random_shuffle(ivec.begin(),ivec.end());
	print<vector<int>::iterator>(ivec.begin(),ivec.end());
}
//分区
void two()
{
	vector<int> ivec2,ivec3;
	inserts<vector<int>>(ivec2,1,9);
	inserts<vector<int>>(ivec3,1,9);

	partition(ivec2.begin(),ivec2.end(),not1(bind2nd(modulus<int>(),2)));
	print<vector<int>::iterator>(ivec2.begin(),ivec2.end());
}
void main()
{
	two();
}