#include "numberOne.h"
#include <iostream>
#include <string>
#include <set>
using namespace std;
typedef set<int> setInt;
template<class Contarner>
void numberOne<Contarner>::demo1()
{
	//这两个容器会自动排序
	//他们查找插入和删除的速度都是非常快的
	//插入比向量慢一点点
	set<int> a;//不可重复
	multiset<int> ma;//可重复

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

	//可重复
	cout<<endl<<endl;
	ma.insert(a.begin(),a.end());
	ma.insert(1000);
	PrintMap(ma);
	/*multiset<int>::const_iterator mas=ma.begin();
	for(mas;mas!=ma.end();++mas)
	{
		cout<<*mas<<endl;
	}*/
	cout<<"重复的1000有:"<<ma.count(1000)<<"个"<<endl;
}
template<class Contarner>
void numberOne<Contarner>::demo2()
{
	Contarner a;//不可重复
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