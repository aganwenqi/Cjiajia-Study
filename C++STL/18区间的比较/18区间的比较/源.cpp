#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <functional>
using namespace std;

bool elem(int a,int b)
{
	cout<<a<<" "<<b<<endl;
	
	return a==b;
}
//比较两个区间是否相等
void one()
{
	vector<int> ivec;
	list<int> ilist;

	for(int i=1;i<=7;++i)
		ivec.push_back(i);

	for(int i=1;i<=7;++i)
		ilist.push_back(i);

	for(vector<int>::iterator iter=ivec.begin();
		iter!=ivec.end();
		++iter)
		cout<<*iter<<" ";
	cout<<endl;

	for(list<int>::iterator iter=ilist.begin();
		iter!=ilist.end();
		++iter)
		cout<<*iter<<" ";
	cout<<endl;
	if(equal(ivec.begin(),ivec.end(),ilist.begin()))
		cout<<"这两个区间相等"<<endl;
	else
		cout<<"这两个区间不相等"<<endl;

	cout<<"谓词比较法"<<endl;
	if(equal(ivec.begin(),ivec.end(),ilist.begin(),elem))
		cout<<"这两个区间相等"<<endl;
	else
		cout<<"这两个区间不相等"<<endl;
}
//查找两个区间 不相等的地方
void two()
{
	vector<int> ivec;
	list<int> ilist;

	for(int i=1;i<=7;++i)
		ivec.push_back(i);

	for(int i=2;i<=8;++i)
		ilist.push_back(i);

	for(vector<int>::iterator iter=ivec.begin();
		iter!=ivec.end();
		++iter)
		cout<<*iter<<" ";
	cout<<endl;

	for(list<int>::iterator iter=ilist.begin();
		iter!=ilist.end();
		++iter)
		cout<<*iter<<" ";
	cout<<endl;

	pair<vector<int>::iterator,list<int>::iterator> ipair;
	//查找是否有不相等的地方
	ipair=mismatch(ivec.begin(),ivec.end(),ilist.begin());
	if(ipair.first!=ivec.end())
	{
	cout<<"找到了第一个不相等的地方"<<endl;
	cout<<*ipair.first<<" "<<*ipair.second<<endl;
	}
	//使用谓词
	ipair=mismatch(ivec.begin(),ivec.end(),ilist.begin(),less_equal<int>());
	if(ipair.first!=ivec.end())
	{
	cout<<"找到了第一个小于的地方"<<endl;
	cout<<*ipair.first<<" "<<*ipair.second<<endl;
	}
}
//查找第一个区间是否小于第二个区间
bool equal_user(int a,int b)
{
	cout<<a<<" "<<b<<endl;
	return false;
}
void  three()
{
	vector<int> ivec;
	list<int> ilist;

	for(int i=3;i<=7;++i)
		ivec.push_back(i);

	for(int i=2;i<=9;++i)
		ilist.push_back(i);

	for(vector<int>::iterator iter=ivec.begin();
		iter!=ivec.end();
		++iter)
		cout<<*iter<<" ";
	cout<<endl;

	for(list<int>::iterator iter=ilist.begin();
		iter!=ilist.end();
		++iter)
		cout<<*iter<<" ";
	cout<<endl;
	
	bool quite=false;

	quite=lexicographical_compare(ivec.begin(),ivec.end(),ilist.begin(),ilist.end());
	if(quite)
		cout<<"第一个区间小于第二个区间"<<endl;
	else
		cout<<"第一个区间大于第二个区间"<<endl;

	cout<<"谓词比较"<<endl;
	lexicographical_compare(ivec.begin(),ivec.end(),ilist.begin(),ilist.end(),equal_user);

}
bool sort_one(int a,int b)
{
	cout<<a<<" "<<b<<endl;
	return a>b;
}
//sort排序
void  four(){
	vector<int> ivec;

	ivec.push_back(2);
	ivec.push_back(1);
	ivec.push_back(5);
	ivec.push_back(3);
	//sort(ivec.begin(),ivec.end());
	sort(ivec.begin(),ivec.end(),sort_one);
	cout<<endl;
	for(vector<int>::iterator iter=ivec.begin();
		iter!=ivec.end();
		++iter)
		cout<<*iter<<" ";
	cout<<endl;

	


}
void main()
{
	 four();
}