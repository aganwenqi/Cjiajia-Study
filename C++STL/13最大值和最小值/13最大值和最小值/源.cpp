#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;
//二元位次函数
bool absLess(int elem1,int elem2);
void main()
{
	deque<int> ideq;
	for(int i=2;i<=8;++i)
		ideq.insert(ideq.end(),i);
	for(int i=-3;i<=5;++i)
		ideq.insert(ideq.end(),i);

	for(deque<int>::const_iterator iter=ideq.begin();
         iter!=ideq.end();++iter)
		 cout<<*iter<<" ";
	cout<<endl;

	cout<<"最小值："<<*min_element(ideq.begin(),ideq.end())<<endl;
	cout<<"最大值："<<*max_element(ideq.begin(),ideq.end())<<endl;
	cout<<"绝对最小值"<<*min_element(ideq.begin(),ideq.end(),absLess)<<endl;
}
bool absLess(int elem1,int elem2)
{
	return abs(elem1)<abs(elem2);
}