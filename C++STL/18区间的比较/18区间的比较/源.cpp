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
//�Ƚ����������Ƿ����
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
		cout<<"�������������"<<endl;
	else
		cout<<"���������䲻���"<<endl;

	cout<<"ν�ʱȽϷ�"<<endl;
	if(equal(ivec.begin(),ivec.end(),ilist.begin(),elem))
		cout<<"�������������"<<endl;
	else
		cout<<"���������䲻���"<<endl;
}
//������������ ����ȵĵط�
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
	//�����Ƿ��в���ȵĵط�
	ipair=mismatch(ivec.begin(),ivec.end(),ilist.begin());
	if(ipair.first!=ivec.end())
	{
	cout<<"�ҵ��˵�һ������ȵĵط�"<<endl;
	cout<<*ipair.first<<" "<<*ipair.second<<endl;
	}
	//ʹ��ν��
	ipair=mismatch(ivec.begin(),ivec.end(),ilist.begin(),less_equal<int>());
	if(ipair.first!=ivec.end())
	{
	cout<<"�ҵ��˵�һ��С�ڵĵط�"<<endl;
	cout<<*ipair.first<<" "<<*ipair.second<<endl;
	}
}
//���ҵ�һ�������Ƿ�С�ڵڶ�������
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
		cout<<"��һ������С�ڵڶ�������"<<endl;
	else
		cout<<"��һ��������ڵڶ�������"<<endl;

	cout<<"ν�ʱȽ�"<<endl;
	lexicographical_compare(ivec.begin(),ivec.end(),ilist.begin(),ilist.end(),equal_user);

}
bool sort_one(int a,int b)
{
	cout<<a<<" "<<b<<endl;
	return a>b;
}
//sort����
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