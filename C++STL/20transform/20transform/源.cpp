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
	//taansform(b1,e1,b2,ν��)
void transformOne()
{
	vector<int> ivec;
	list<int> ilist(9);

	for(int i=1;i<=9;++i)
		ivec.push_back(i);

	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	//��
	transform(ivec.begin(),ivec.end(),
		ivec.begin(),negate<int>());

	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	//�޸ĵ�һ�Ե�������ֵ���ڶ��Ե�����
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

	//���Ե�������˸������Ե�����
	transform(ivec.begin(),ivec.end(),
		ivec.begin(),
		ilist.begin(),
		multiplies<int>());
	print<list<int>::iterator>(ilist.begin(),ilist.end());

	//����
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