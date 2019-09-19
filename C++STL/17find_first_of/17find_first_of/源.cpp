#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <functional>
using namespace std;
bool elem(int a,int b)
{
	cout<<a<<" "<<b<<endl;
	if(a<b)
		return true;
	return false;
}
void main()
{
	vector<int> ivec;
	list<int> searchList;

	for(int i=0;i<=11;++i)
		ivec.push_back(i);

	searchList.push_back(3);
	searchList.push_back(8);
	searchList.push_back(6);

	vector<int>::iterator pos;
	//查找第二对迭代器里的数，如果有一个出现了，那么就成立
	pos=find_first_of(ivec.begin(),ivec.end(),searchList.begin(),searchList.end());
	if(pos!=ivec.end())
		cout<<"找到了"<<endl;
	else
		cout<<"没找到"<<endl;

	//逆向迭代器
	vector<int>::reverse_iterator rpos;
	rpos=find_first_of(ivec.rbegin(),ivec.rend(),searchList.begin(),searchList.end());
	if(rpos!=ivec.rend())
		cout<<"找到了"<<endl;
	else
		cout<<"没找到"<<endl;

			rpos=find_first_of(ivec.rbegin(),ivec.rend(),searchList.begin(),searchList.end(),
				elem
				);
	if(rpos!=ivec.rend())
		cout<<"找到了"<<*rpos<<endl;
	else
		cout<<"没找到"<<endl;
}
