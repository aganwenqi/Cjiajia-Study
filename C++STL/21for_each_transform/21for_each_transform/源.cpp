#include<iostream>
#include <functional>
#include <algorithm>
#include <vector>

using namespace std;
template <class T>
void print(const T& s,const T& a)
{
	for(T iter=s;
		iter!=a;++iter)
		cout<<*iter<< " ";
	cout<<endl;
}

void square(int & el)
{
	el=5;
}
int suqare2(int elem)
{
	return elem*elem;
}
void main()
{
	vector<int> ivec;
	vector<int> iveb;
	for(int i=1;i<=9;++i)
	{
		ivec.push_back(i);
		iveb.push_back(i);
	}
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	for_each(ivec.begin(),ivec.end(),square);
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	print<vector<int>::iterator>(iveb.begin(),iveb.end());

	transform(iveb.begin(),iveb.end(),iveb.begin(),suqare2);
	print<vector<int>::iterator>(iveb.begin(),iveb.end());

}
