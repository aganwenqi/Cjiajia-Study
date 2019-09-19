#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <list>
#include <set>
#include <deque>
#include <string>
using namespace std;
template <class T>
void print(const T& s,const T& a)
{
	for(T iter=s;
		iter!=a;++iter)
		cout<<*iter<< " ";
	cout<<endl;
}
template <class T,class S>
void inserts(T &t,S s,const S e)
{
	for(S a=s;a<=e;a++)
		t.push_back(a);
}
void one()
{
	deque<int> ideq;

	inserts<deque<int>>(ideq,1,9);
	inserts<deque<int>>(ideq,1,9);
	print<deque<int>::iterator>(ideq.begin(),ideq.end());

	sort(ideq.begin(),ideq.end());
	print<deque<int>::iterator>(ideq.begin(),ideq.end());
}
bool lessLength(const string& s1,const string& s2)
{
	return s1.size()<s2.size();
}
void stable_sort()
{
	vector<string> svec,svec2;

	svec.push_back("1xxx");
	svec.push_back("2x");
	svec.push_back("3x");
	svec.push_back("4x");
	svec.push_back("5xx");
	svec.push_back("6xxxx");
	svec.push_back("7xx");
	svec.push_back("8xxx");
	svec.push_back("9xx");
	svec.push_back("10xxx");
	svec.push_back("11");
	svec.push_back("12");
	svec.push_back("13");
	svec.push_back("14xx");
	svec.push_back("15");
	svec.push_back("16");
	svec.push_back("17");
    
	svec2=svec;

    for(auto a:svec)
		cout<<a<<" ";
	cout<<endl;

	sort(svec.begin(),svec.end(),lessLength);

	 for(auto a:svec)
		cout<<a<<" ";
	cout<<endl;

	stable_sort(svec2.begin(),svec2.end(),lessLength);
	 for(auto a:svec2)
		cout<<a<<" ";
	cout<<endl;

}
//¾Ö²¿ÅÅÐò
void jubu_sort()
{
	deque<int> ideq;
	inserts<deque<int>>(ideq,3,7);
	inserts<deque<int>>(ideq,2,6);
	
	print<deque<int>::iterator>(ideq.begin(),ideq.end());

	partial_sort(ideq.begin(),ideq.begin()+5,ideq.end());
	print<deque<int>::iterator>(ideq.begin(),ideq.end());

	//Î½´Ê
	partial_sort(ideq.begin(),ideq.begin()+5,ideq.end(),greater<int>());
	print<deque<int>::iterator>(ideq.begin(),ideq.end());
}
void jubu_sort_copy()
{
	deque<int> ideq;
	vector<int>ivec6(6);
	vector<int> ivec(30);

	inserts<deque<int>>(ideq,3,7);
	inserts<deque<int>>(ideq,2,6);
	inserts<deque<int>>(ideq,1,5);
	print<deque<int>::iterator>(ideq.begin(),ideq.end());

	//Î½´Ê
	partial_sort_copy(ideq.begin(),ideq.begin()+7,ivec6.begin(),ivec6.end(),greater<int>());
	print<deque<int>::iterator>(ideq.begin(),ideq.end());
	print<vector<int>::iterator>(ivec6.begin(),ivec6.end());

	ivec.erase(partial_sort_copy(ideq.begin(),ideq.end(),ivec.begin(),ivec.end(),greater<int>()),ivec.end());
	print<vector<int>::iterator>(ivec.begin(),ivec.end());

}
void main()
{
	jubu_sort_copy();
}