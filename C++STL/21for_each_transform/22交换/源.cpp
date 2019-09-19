#include<iostream>
#include <algorithm>
#include <vector>
#include <deque>

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
bool swap_one(int elem1,int elem2)
{
}
void main()
{
	vector<int> ivec;
	deque<int> ideq;

	inserts<vector<int>,int>(ivec,1,9);
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

	inserts<deque<int>,int>(ideq,11,23);
	print<deque<int>::iterator>(ideq.begin(),ideq.end());

	//����,����ֵ�ǵڶ�������û�������Ŀ�ͷ��������end()˵���ڶ������仹������û����
	deque<int>::iterator pos;
	pos=swap_ranges(ivec.begin(),ivec.end(),ideq.begin());
	print<deque<int>::iterator>(ideq.begin(),ideq.end());


}