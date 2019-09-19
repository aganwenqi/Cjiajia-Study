#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <set>
using namespace std;

bool isEven(int elem)
{
	return elem%2==0;
}
void main()
{
	vector<int> ivec;
	for(int i=1;i<=9;++i)
		ivec.push_back(i);
    int num;

	//�����ж��ٸ�4
	num=count(ivec.begin(),ivec.end(),4);

	cout<<"��"<<num<<"��4"<<endl;

	num=count_if(ivec.begin(),ivec.end(),isEven);
	cout<<"��"<<num<<"��ż��"<<endl;

	count_if(ivec.begin(), ivec.end(), bind2nd(greater<int>(), 4));
	cout<<"��"<<num<<"������4����"<<endl;

	count_if(ivec.begin(), ivec.end(), not1(bind2nd(modulus<int>(), 2)));
	cout<<"��"<<num<<"��ż��"<<endl;
	//cout<<endl<<not1(1)<<endl<<not2(2)<<endl;

	multiset<int> mset;
	for(int i=1;i<=9;++i)
		mset.insert(mset.end(),i);
	for(int i=1;i<=9;++i)
		mset.insert(mset.end(),i);
	for(multiset<int>::const_iterator mt=mset.begin();
		mt!=mset.end();
		++mt)
		cout<<*mt<<endl;
	num=count_if(mset.begin(),mset.end(),bind2nd(greater<int>(),3));
	cout<<"mset����"<<num<<"������3���"<<endl;
}