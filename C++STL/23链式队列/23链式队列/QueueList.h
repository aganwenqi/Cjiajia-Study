#ifndef QUEUELIST_H_
#define QUEUELIST_H_

template<class T>
class Queue
{
public:
	Queue();
	~Queue();

	bool isEmpty() const;
	const T & getFront() const;
	void enqueue(const T & x);
	T dequeue();
	void makeEmpty();

private:
	struct ListNode
	{
		T element;
		ListNode *next;

		ListNode(const T & theElement,ListNode *n= NULL)
			:element(theElement),next(n){}
	};

	ListNode *front;
	ListNode *back;
};
template<class T>
Queue<T>::Queue()
{
	front = back = NULL;

}
template<class T>
Queue<T>::~Queue()
{
	makeEmpty();
}
template<class T>
void Queue<T>::makeEmpty()
{
	if(!isEmpty())
		dequeue();
}
template<class T>
bool Queue<T>::isEmpty() const
{
	return front == NULL;
}
template<class T>
const T & Queue<T>::getFront() const
{
	if(isEmpty())
		throw "Queue is empty";
	return front->element;
}
template<class T>
void Queue<T>::enqueue(const T &x)
{
	if(isEmpty())
		back = front = new ListNode(x);
	else
		back = back->next = new ListNode(x);
}
template<class T>
T Queue<T>::dequeue()
{
	if(isEmpty())
		throw "Queue is empty";

		ListNode *temporaly = NULL;
		temporaly = front->next;
		delete front;
		front = temporaly;
	return front ? front->element : NULL;
}

#endif