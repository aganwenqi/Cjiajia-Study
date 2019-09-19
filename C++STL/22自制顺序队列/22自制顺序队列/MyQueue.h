#ifndef MYQUEUE_H_
#define MYQUEUE_H_

template<class T>
class MyQueue
{
public:
	MyQueue(int queueCapacity=3);
	bool IsEmpty() const;
	T& Front() const;
	T& Rear() const;
	void Push(const T& item);
	void Pop();
private:
	T* queue;
	int front;
	int rear;
	int capacity;
};

template<class T>
MyQueue<T>::MyQueue(int queueCapacity=3):capacity(queueCapacity)
{
	if(capacity<1) throw "MyQueue Capacity must be > 1";
	front=rear=0;
	queue=new T[capacity];
}
template<class T>
inline bool MyQueue<T>::IsEmpty() const
{
	return front==rear;
}
template<class T>
inline T& MyQueue<T>::Front() const
{
	if(IsEmpty()) throw "Queue is empty. No front element";
	return queue[(front+1)% capacity];
}
template<class T>
inline T& MyQueue<T>::Rear() const
{
	if(IsEmpty()) throw "Queue is empty. No rear element";
	return queue[rear];
}
template<class T>
void MyQueue<T>::Push(const T& item)
{
	if((rear+1)%capacity==front)//队列已经满了
	{
		//加倍
		T* newQueue = new T[2*capacity];
		int start = (front+1) % capacity;
		if(start<2)//没有回转
		copy(queue+start,queue+start+capacity-1,newQueue);
		else//wrap
		{
			copy(queue+start,queue+capacity,newQueue);
			copy(queue,queue+rear+1,newQueue+capacity-start);
		}
		front =2*capacity-1;
		rear =capacity-2;
		capacity *= 2;
		delete[] queue;
		queue=newQueue;
	}
	rear=(rear+1)%capacity;
	queue[rear]=item;
}
template<class T>
void MyQueue<T>::Pop()
{
	if(IsEmpty()) throw "Queue is empty Cannot delete";
	front=(front+1)%capacity;
	queue[front].~T();
}

#endif