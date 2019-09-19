#include <iostream>
#include "MyQueue.h"
using namespace std;

int main()
{
	MyQueue<int> a;
	cout<<"²âÊÔË³Ðò¶ÓÁÐ"<<endl;
	try{
	a.Push(1);
	a.Pop();
	a.Pop();
	a.Push(3);
	a.Push(3);
	a.Push(4);
	a.Push(3);
	a.Push(3);
	cout<<a.Front()<<endl;
	cout<<a.Rear()<<endl;
	}catch(exception a){}
	return 0;
}