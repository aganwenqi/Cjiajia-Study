#include <iostream>
#include <queue>
#include <list>
#include <deque>

using namespace std;
void duilie1()
{
	queue<int,deque<int>> a;
	queue<int,list<int>> b;
	queue<int> q;

	//队尾插入数据
	q.push(10);
	q.push(5);
	q.push(-1);
	q.push(20);
	
	cout<<"现在队列里有："<<q.size()<<"个数据"<<endl;
	cout<<"队首的数据："<<q.front()<<endl;
	cout<<"队尾的数据："<<q.back()<<endl;
	//队首删除
	q.pop();
	while(q.size()!=0)
	{
		cout<<"删除："<<q.front()<<endl;
		q.pop();
	}
	if(q.empty())
		cout<<"现在队列是空的!"<<endl;
}
//优先级队列
void duilie2()
{
	//默认是vector
	priority_queue<int,vector<int>> pq;//最大值优先级队列
	/*priority_queue<int,deque<int>,greater<int>> pq2;*/

	
	pq.push(10);
	pq.push(5);
	pq.push(-1);
	pq.push(20);
	cout<<"优先级队列一共有多少个数据："<<pq.size()<<endl;
	cout<<pq.top()<<endl;
	while(!pq.empty())
	{
		cout<<"从优先级队列里删除:"<<pq.top()<<endl;
		pq.pop();
	}

}
void main()
{
	duilie2();
}