#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;
void main()
{
	list<int> ilist;
	ilist.push_back(10);
	ilist.push_back(20);
	ilist.push_back(30);
	cout<<"����������ݵĸ���:"<<ilist.size()<<endl;
	list<int>::size_type count=ilist.size();
	cout<<"����������ݵĸ���:"<<count<<endl;
	cout<<"ilist.max_size():"<<ilist.max_size()<<endl;

	//���������Ĵ�С���10��
	ilist.resize(10);
	ilist.resize(20,1);//��ʾ�����ӵ�������1�����

}