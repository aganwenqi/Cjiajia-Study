#include <iostream>
#include <string>
#include <set>
#include "numberOne.h"
using namespace std;

/*template<class Contarner>

void PrintMap(const Contarner& c);

void demo1();
void demo2();*/
typedef set<int> setInt;
int main(void)
{
	//demo2();
	//numberOne<setInt> a;
	return true;
}

/*
void demo2()
{
	setInt a;//≤ªø…÷ÿ∏¥
	int num=1;

	a.insert(60);
	a.insert(20);
	a.insert(1000);
	
	while(num){
	cout<<"Cin find to data:";
	cin >>num;
	setInt::const_iterator cs=a.find(num);

	if(cs!=a.end())
		cout<<"You find the data is:"<<*cs<<endl;
	else
		cout<<"You can not find the data"<<endl;
	}
}
template<class Contarner>
void PrintMap(const Contarner& c)
{
	Contarner::iterator sh=c.begin();

	while(sh!=c.end())
	{
		cout<<*sh<<endl;
		++sh;
	}
}*/