#include<iostream>
#include<vector>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;
template<class T>
void print(const T& s,const T& a)
{
	for(T iter=s;
		iter!=a;++iter)
		cout<<*iter<< " ";
	cout<<endl;
}
	//taansform(b1,e1,b2,谓词)
void transformOne()
{
	vector<int> ivec;
	list<int> ilist(9);

	for(int i=1;i<=9;++i)
		ivec.push_back(i);

	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	//起负
	transform(ivec.begin(),ivec.end(),
		ivec.begin(),negate<int>());

	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	//修改第一对迭代器的值给第二对迭代器
	transform(ivec.begin(),ivec.end(),ilist.begin(),bind2nd(multiplies<int>(),10));

	print<list<int>::iterator>(ilist.begin(),ilist.end());
}
bool ase(int &a,int &b)
{
	//a+=b;
	b+=a;
	return true;
}
void transformTwo()
{
	vector<int> ivec;
	list<int> ilist(9);

	for(int i=1;i<=9;++i)
		ivec.push_back(i);

	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	//两对迭代器相乘给第三对迭代器
	transform(ivec.begin(),ivec.end(),
		ivec.begin(),
		ilist.begin(),
		multiplies<int>());
	print<list<int>::iterator>(ilist.begin(),ilist.end());

	//测试
	transform(ivec.begin(),ivec.end(),
		ilist.begin(),
		ivec.begin(),
		ase);
	print<vector<int>::iterator>(ivec.begin(),ivec.end());
	print<list<int>::iterator>(ilist.begin(),ilist.end());
}
void main()
{
	transformTwo();
	
}