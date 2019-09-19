#include <iostream>
#include "QueueList.h"
using namespace std;
void main()
{
	cout<<"²âÊÔÁ´Ê½¶ÓÁÐ"<<endl;
	Queue<int> q;

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	cout<<q.getFront()<<endl;
	cout<<q.dequeue()<<endl;


	q.makeEmpty();
	cout<<q.isEmpty()<<endl;

}