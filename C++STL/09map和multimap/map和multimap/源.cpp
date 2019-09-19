#include <iostream>
#include <map>
#include <string>
using namespace std;

void main()
{
	map<int, string> a;
	multimap<int,string> ma;

	a.insert(map<int,string>::value_type(1,"One"));
	a.insert(map<int,string>::value_type(2,"Two"));
	a.insert(map<int,string>::value_type(3,"Three"));
	a.insert(make_pair(-1,"Minus One"));
	a.insert(pair<int,string>(1000,"One Thousand"));
	a[1000000]="One Million";
	map<int,string>::const_iterator mapit=a.begin();

	for(mapit;mapit!=a.end();++mapit)
	{
		cout<<"Key:"<<mapit->first<<"\t";
		cout<<"Value:"<<mapit->second.c_str()<<endl;
	}
	cout<<endl<<endl;
	//可重复
	ma.insert(multimap<int,string>::value_type(1,"One"));
	ma.insert(multimap<int,string>::value_type(2,"Two"));
	ma.insert(multimap<int,string>::value_type(3,"Three"));
	ma.insert(pair<int,string>(1000,"One Thousand"));
	ma.insert(pair<int,string>(1000,"One Thousand"));
	multimap<int,string>::const_iterator mapit1=ma.begin();

	for(mapit1;mapit1!=ma.end();++mapit1)
	{
		cout<<"Key:"<<mapit1->first<<"\t";
		cout<<"Value:"<<mapit1->second.c_str()<<endl;
	}
	cout<<"multimap里面有:"<<ma.count(1000)<<"个1000"<<endl;

	//find
	multimap<int,string>::const_iterator fi;
	fi=ma.find(2);//寻找键值对应的迭代器
	if(fi!=ma.end())
		cout<<"找到了"<<endl;
	ma.erase(fi);//通过迭代器删除
	ma.erase(1);//通过键值删除
   //第一个1000和最后一个1000
	ma.erase(ma.lower_bound(1000),ma.upper_bound(1000));//删除一定范围
}