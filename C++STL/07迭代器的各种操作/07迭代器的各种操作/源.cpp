#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

void main()
{
	vector<int> a;
	list<int>   b;
	deque<int>  c;
	
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	vector<int>::size_type              a1;
	vector<int>::iterator               a2;
	vector<int>::const_iterator         a3;
	vector<int>::reverse_iterator       a4;//逆向
	vector<int>::const_reverse_iterator a5;
	vector<int>::difference_type        a6;//容器中两个值得距离
	/*vector<int>::value_type             a7;
	vector<int>::reference              a8();
	vector<int>::const_reference        a9();*/
	for(a4=a.rbegin();a4!=a.rend();++a4)
		cout<<*a4<<endl;

}