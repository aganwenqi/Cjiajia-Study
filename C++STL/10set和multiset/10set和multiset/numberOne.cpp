#include "numberOne.h"
#include <iostream>
#include <string>
#include <set>
using namespace std;
typedef set<int> setInt;
template<class Contarner>
void numberOne<Contarner>::demo1()
{
	//�������������Զ�����
	//���ǲ��Ҳ����ɾ�����ٶȶ��Ƿǳ����
	//�����������һ���
	set<int> a;//�����ظ�
	multiset<int> ma;//���ظ�

	a.insert(60);
	a.insert(20);
	a.insert(1000);
	PrintMap(a);
	/*set<int>::const_iterator as=a.begin();
	while(as!=a.end())
	{
		cout<<*as<<endl;
		++as;
	}*/

	//���ظ�
	cout<<endl<<endl;
	ma.insert(a.begin(),a.end());
	ma.insert(1000);
	PrintMap(ma);
	/*multiset<int>::const_iterator mas=ma.begin();
	for(mas;mas!=ma.end();++mas)
	{
		cout<<*mas<<endl;
	}*/
	cout<<"�ظ���1000��:"<<ma.count(1000)<<"��"<<endl;
}
template<class Contarner>
void numberOne<Contarner>::demo2()
{
	Contarner a;//�����ظ�
	int num=1;

	a.insert(60);
	a.insert(20);
	a.insert(1000);
	
	while(num){
	cout<<"Cin find to data:";
	cin >>num;
	Contarner::const_iterator cs=a.find(num);

	if(cs!=a.end())
		cout<<"You find the data is:"<<*cs<<endl;
	else
		cout<<"You can not find the data"<<endl;
	}
}
template<class Contarner>
void numberOne<Contarner>::demo3()
{
}
template<class Contarner>
void numberOne<Contarner>::PrintMap(const Contarner& c)
{
	Contarner::iterator sh=c.begin();

	while(sh!=c.end())
	{
		cout<<*sh<<endl;
		++sh;
	}
}