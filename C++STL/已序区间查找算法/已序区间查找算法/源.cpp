#include <iostream>
#include <algorithm>
#include <list>
#include <functional>
using namespace std;
//binary_search
void algorithm_one()
{
	list<int> ilist;
	for(int i=0;i<=9;++i)
		ilist.insert(ilist.end(),i);

	for(list<int>::iterator iter=ilist.begin();
		iter!=ilist.end();
		++iter)
		cout<<*iter<<" ";
	cout<<endl;
	  if(binary_search(ilist.begin(),ilist.end(),5))
		  cout<<"找到了"<<endl;
	  else
		  cout<<"没找到"<<endl;
	
}
bool elem(int i,int e)
{
	cout<<i<<" "<<e<<endl;
	if(i==e)
		return true;
	else
		return false;
}
//lower_bund,upper_bound,equal_range
void algorithm_two()
{
	list<int> ilist;
	for(int i=0;i<=9;++i)
		ilist.insert(ilist.end(),i);
	for(int i=0;i<=9;++i)
		ilist.insert(ilist.end(),i);
	ilist.sort();

	for(list<int>::iterator iter=ilist.begin();
		iter!=ilist.end();
		++iter)
		cout<<*iter<<" ";
	cout<<endl;
	list<int>::iterator pos;
	pos=lower_bound(ilist.begin(),ilist.end(),5);
	 if(pos!=ilist.end())
		  cout<<"5找到了"<<distance(ilist.begin(),pos)<<" "<<*pos<<endl;
	  else
		  cout<<"没找到"<<endl;
	 pos=upper_bound(ilist.begin(),ilist.end(),5,less<int>());
	 if(pos!=ilist.end())
		  cout<<"5找到了"<<distance(ilist.begin(),pos)<<" "<<*pos<<endl;
	  else
		  cout<<"没找到"<<endl;

	 //equal_range
	 pair<list<int>::iterator,list<int>::iterator> range;
	 range=equal_range(ilist.begin(),ilist.end(),5);

	cout<<*range.first<<" "<<*range.second<<endl;
}
void main()
{
	algorithm_two();
}