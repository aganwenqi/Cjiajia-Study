#include<iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>
#include <functional>
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
void remove_one()
{
	list<int> ilist;
	for(int i=1;i<=6;++i)
	{
		ilist.push_front(i);
		ilist.push_back(i);
	}
	print<list<int>::iterator>(ilist.begin(),ilist.end());

	//实际没有删除，只是后面的覆盖前面的而已
	list<int>::iterator pos;
	pos=remove(ilist.begin(),ilist.end(),3);
	print<list<int>::iterator>(ilist.begin(),ilist.end());

	//真正的删除
	ilist.erase(pos,ilist.end());
	print<list<int>::iterator>(ilist.begin(),ilist.end());
	
	cout<<"真正删除"<<endl;
	vector<int> ivec;
	inserts<vector<int>>(ivec,2,6);
	inserts<vector<int>>(ivec,4,9);
	inserts<vector<int>>(ivec,1,7);
	print<vector<int>::iterator>(ivec.begin(),ivec.end());
	
	ivec.erase(remove(ivec.begin(),ivec.end(),5),ivec.end());
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	ivec.erase(remove_if(ivec.begin(),ivec.end(),bind2nd(less<int>(),4)),ivec.end());
	print<vector<int>::iterator>(ivec.begin(),ivec.end());
}
void remove_two()
{
	list<int> ilist;
	
	inserts<list<int>,int>(ilist,1,6);
	inserts<list<int>,int>(ilist,1,9);
	print<list<int>::iterator>(ilist.begin(),ilist.end());

	
	multiset<int> iset;/*
	remove_copy_if(ilist.begin(),ilist.end(),inserter(iset,iset.end()),
		bind2nd(less<int>(),4));*/

	//remove_copy(ilist.begin(),ilist.end(),iset.begin(),3);

}
bool differenceOne(int elem1,int elem2)
{
	return elem1+1==elem2||elem1-1==elem2;
}
void unique_three()
{
	int source[]={1,3,3,4,2,2,5,7,7,4,4};
	int sourceNum=sizeof(source)/sizeof(int);
	list<int> ilist(source,source+sourceNum);
	vector<int> ivec(15);
	print<list<int>::iterator>(ilist.begin(),ilist.end());
	//把连续重复的数据删除
//	ilist.erase(unique(ilist.begin(),ilist.end()),ilist.end());
	//print<list<int>::iterator>(ilist.begin(),ilist.end());

	//把小于3的数删除

	/*copy(source,source+sourceNum,ilist.begin());
	print<list<int>::iterator>(ilist.begin(),ilist.end());
	ilist.erase(unique(ilist.begin(),ilist.end(),greater<int>()),ilist.end());
	print<list<int>::iterator>(ilist.begin(),ilist.end());*/

	//unique_copy
	copy(source,source+sourceNum,ilist.begin());
	print<list<int>::iterator>(ilist.begin(),ilist.end());
	//unique_copy(ilist.begin(),ilist.end(),ivec.begin());
	//print<vector<int>::iterator>(ivec.begin(),ivec.end());

	//谓词
	unique_copy(ilist.begin(),ilist.end(),ivec.begin(),differenceOne);
	print<vector<int>::iterator>(ivec.begin(),ivec.end());
}
void main()
{
	unique_three();
}