#include <iostream>
#include <algorithm>
#include <deque>
#include <list>

using namespace std;
bool checkEven(int elem,char even)
{
	if(even=='i')
		return elem%2==0;
	else
		return elem%2==1;
}
void two()
{
	deque<int> ideq;
	for(int i=1;i<=9;++i)
		ideq.insert(ideq.end(),i);

	for(deque<int>::iterator iter=ideq.begin();
		iter!=ideq.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;

	char checkEvenArgs[3]={'i','0','i'};

	deque<int>::iterator pos;
	pos=search(ideq.begin(),ideq.end(),checkEvenArgs,checkEvenArgs+3,checkEven);
	if(pos!=ideq.end())
		cout<<"找到了"<<endl;
}
void one()
{
	deque<int> ideq;
	list<int> ilist;

	for(int i=1;i<=7;++i)
		ideq.insert(ideq.end(),i);
	for(int i=1;i<=7;++i)
		ideq.insert(ideq.end(),i);

	for(int i=3;i<=6;++i)
		ilist.insert(ilist.end(),i);

	for(deque<int>::iterator iter=ideq.begin();
		iter!=ideq.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;

	for(list<int>::iterator iter=ilist.begin();
		iter!=ilist.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;

	//在一个区间里找另外一个区间,find_end从右向左找
	deque<int>::iterator pos;
	pos=search(ideq.begin(),ideq.end(),
		ilist.begin(),ilist.end());
	if(pos!=ideq.end())
		cout<<"找到了 位置："<<distance(ideq.begin(),pos+1)<<endl;
	else
		cout<<"没找到"<<endl;
}
void main()
{
	two();
}