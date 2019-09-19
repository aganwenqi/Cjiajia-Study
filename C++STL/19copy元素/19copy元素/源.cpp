#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>
#include <ostream>
using namespace std;
void copy_one()
{
	list<int> ilist;
	for(int i=0;i<10;++i)
		ilist.push_back(i);
	for(list<int>::iterator iter=ilist.begin();
		iter!=ilist.end();++iter)
		cout<<*iter<<" "<<endl;
	cout<<endl;

	vector<int> ivec(ilist.size()*2);
	for(vector<int>::iterator iter=ivec.begin();
		iter!=ivec.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
	//copy
	copy(ilist.begin(),ilist.end(),ivec.begin());
	for(vector<int>::iterator iter=ivec.begin();
		iter!=ivec.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
	//从后面开始拷贝
	copy_backward(ilist.begin(),ilist.end(),ivec.end());
		for(vector<int>::iterator iter=ivec.begin();
		iter!=ivec.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
}
void copy_two()
{
	vector<int> ivec;
	list<int> ilist;
	for(int i=1;i<10;++i)
		ivec.push_back(i);
	//插入型迭代器
	//copy(ivec.begin(),ivec.end(),ostream_iterator<int>(cout," "));
	
}
//同一个容器里拷贝
void copy_three()
{
	vector<char> source(10,'.');
	for(int i='a';i<'f';++i)
		source.push_back(i);
	source.insert(source.end(),10,'.');
	for(vector<char>::iterator iter=source.begin();
		iter!=source.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;

	vector<char> c1(source.begin(),source.end());
	copy(c1.begin()+10,c1.begin()+15,c1.begin()+7);
	for(vector<char>::iterator iter=c1.begin();
		iter!=c1.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
	
}
void main()
{
	copy_three();

}