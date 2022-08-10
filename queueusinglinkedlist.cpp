//Queue using linked list
#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
	Node(int d)
	{
		data=d;
		next=NULL;
	}
};
class queue{
	Node *front;
	Node *rear;
	public:
	queue()
	{
		front=NULL;
		rear=NULL;
	}
	void enqueue(int x)
	{
		Node *temp=new Node(x);
		if(front==NULL)
		{
			rear=temp;
			front=temp;
			return;
		}
		rear->next=temp;
		rear=temp;
	}
	void dequeue()
	{
		if(front == NULL)
		{
			cout<<"queue is empty ";
			return;
		}
		Node *todelete=front;
		front=front->next;
		delete todelete;
	}
	int showfront()
	{
		if(front==NULL)
		{
			cout<<"queue is empty";
			return -1;
		}
		return front->data;
	}
	bool isempty()
	{
		if(front==NULL)
		{
			return true;
		}
		return false;
}
};
int main()
{
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	
	q.dequeue();
	cout<<q.showfront()<<endl;
	
	cout<<q.isempty();
}
