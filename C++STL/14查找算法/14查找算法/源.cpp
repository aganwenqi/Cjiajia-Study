#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <set>
#include <functional>
using namespace std;
void one()
{
	list<int> ilist;
	for(int i=1;i<=9;++i)
		ilist.insert(ilist.end(),i);
	for(int i=1;i<=9;++i)
		ilist.insert(ilist.end(),i);

	for(list<int>::iterator iter=ilist.begin();
		iter!=ilist.end();++iter)
		cout<<*iter<" ";
	cout<<endl;

	list<int>::iterator pos1;
	
	pos1=find(ilist.begin(),ilist.end(),4);
	list<int>::iterator pos2;
	if(pos1!=ilist.end())
	{
		cout<<"1找到"<<*pos1<<endl;
		pos2=find(++pos1,ilist.end(),4);
	}
	else
		cout<<"1没找到"<<endl;
	if(pos2!=ilist.end())
	{
		cout<<"2找到"<<*pos1<<endl;
	}
	else
		cout<<"2没找到"<<endl;
}
void two()
{
	vector<int> ivec;
	vector<int>::const_iterator pos;
	vector<int>::const_iterator pos1;

	for(int i=1;i<=9;++i)
		ivec.push_back(i);

	for(pos=ivec.begin();pos!=ivec.end();++pos)
		cout<<*pos<<" ";
	cout<<endl;

	pos1=find_if(ivec.begin(),ivec.end(),not1(bind2nd(modulus<int>(),8)));
	cout<<*pos1<<endl;
}
//关联式容器的find()
void three()
{
	set<int> iset;
	iset.insert(43);
	iset.insert(78);
	iset.insert(22);
	iset.insert(35);

	for(set<int>::iterator iter=iset.begin();
		iter!=iset.end();
		++iter)
		cout<<*iter<<" ";
	cout<<endl;
	set<int>::iterator pos;
	pos=iset.find(22);
	if(pos!=iset.end())
		cout<<"找到了"<<endl;
	else
		cout<<"没找到"<<endl;
}
void main()
{
	three();
}