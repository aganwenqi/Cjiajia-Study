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

	//��β��������
	q.push(10);
	q.push(5);
	q.push(-1);
	q.push(20);
	
	cout<<"���ڶ������У�"<<q.size()<<"������"<<endl;
	cout<<"���׵����ݣ�"<<q.front()<<endl;
	cout<<"��β�����ݣ�"<<q.back()<<endl;
	//����ɾ��
	q.pop();
	while(q.size()!=0)
	{
		cout<<"ɾ����"<<q.front()<<endl;
		q.pop();
	}
	if(q.empty())
		cout<<"���ڶ����ǿյ�!"<<endl;
}
//���ȼ�����
void duilie2()
{
	//Ĭ����vector
	priority_queue<int,vector<int>> pq;//���ֵ���ȼ�����
	/*priority_queue<int,deque<int>,greater<int>> pq2;*/

	
	pq.push(10);
	pq.push(5);
	pq.push(-1);
	pq.push(20);
	cout<<"���ȼ�����һ���ж��ٸ����ݣ�"<<pq.size()<<endl;
	cout<<pq.top()<<endl;
	while(!pq.empty())
	{
		cout<<"�����ȼ�������ɾ��:"<<pq.top()<<endl;
		pq.pop();
	}

}
void main()
{
	duilie2();
}