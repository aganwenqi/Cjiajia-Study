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
		cout<<"�ҵ���"<<endl;
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

	//��һ��������������һ������,find_end����������
	deque<int>::iterator pos;
	pos=search(ideq.begin(),ideq.end(),
		ilist.begin(),ilist.end());
	if(pos!=ideq.end())
		cout<<"�ҵ��� λ�ã�"<<distance(ideq.begin(),pos+1)<<endl;
	else
		cout<<"û�ҵ�"<<endl;
}
void main()
{
	two();
}