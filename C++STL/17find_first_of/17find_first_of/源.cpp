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
	//���ҵڶ��Ե�����������������һ�������ˣ���ô�ͳ���
	pos=find_first_of(ivec.begin(),ivec.end(),searchList.begin(),searchList.end());
	if(pos!=ivec.end())
		cout<<"�ҵ���"<<endl;
	else
		cout<<"û�ҵ�"<<endl;

	//���������
	vector<int>::reverse_iterator rpos;
	rpos=find_first_of(ivec.rbegin(),ivec.rend(),searchList.begin(),searchList.end());
	if(rpos!=ivec.rend())
		cout<<"�ҵ���"<<endl;
	else
		cout<<"û�ҵ�"<<endl;

			rpos=find_first_of(ivec.rbegin(),ivec.rend(),searchList.begin(),searchList.end(),
				elem
				);
	if(rpos!=ivec.rend())
		cout<<"�ҵ���"<<*rpos<<endl;
	else
		cout<<"û�ҵ�"<<endl;
}
