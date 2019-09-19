#include <iostream>
#include <algorithm>
#include <deque>
#include <functional>
using namespace std;

void main()
{
	deque<int> ideq;
	for(int i=1;i<=9;++i)
		ideq.push_back(i);
	for(deque<int>::iterator iter=ideq.begin();
		iter!=ideq.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
	deque<int>::iterator  pos;
	pos=search_n(ideq.begin(),ideq.end(),2,4);
	if(pos!=ideq.end())
		cout<<"找到了"<<endl;
	else
		cout<<"cannot find "<<endl;

	pos=search_n(ideq.begin(),ideq.end(),3,6,greater<int>());

	if(pos!=ideq.end())
		cout<<"找到了连续的3个大于6的数"<<endl;
	else
		cout<<"cannot find "<<endl;
}