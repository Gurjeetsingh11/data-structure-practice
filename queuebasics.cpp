//queue implementation

/*#include<iostream>
using namespace std;
#define n 5
class queue{
	
	int *arr;
	int front;
	int rear;
	public:
	queue()
	{
		arr=new int[n];
		front=-1;
		rear=-1;
	}
	void push(int x)
	{
		if(rear == n-1)
		{
			cout<<"queue overflow"<<endl;
			return;
		}
		rear++;
		arr[rear]=x;
		if(front==-1)
		{
			front++;
		}	
	}
	void pop()
	{
		if(front==-1 || front>rear)
		{
			cout<<"no element present";
			return;
		}
		front++;
	}
	int peek()
	{
		if(front==-1 || front>rear)
		{
			cout<<"no element present";
			return -1;
		}
		return arr[front];
	}
	bool empty()
	{
		if(front==-1 || front>rear)
		{
			return true;
		}
		return false;
	}
};
int main()
{
	queue q;
	q.push(1);
	q.push(2);
	q.pop();
	q.pop();
	q.push(3);
	cout<<q.peek()<<endl;
}
*/
//queue using 2 stacks
/*#include<iostream>
#include<stack>
using namespace std;
class queue{
	stack<int>st1;
	stack<int>st2;
	public:
		void push(int x)
		{
			st1.push(x);
		}
		int pop()
		{
			if(st1.empty() && st2.empty())
			{
				cout<<"queue is empty ";
				return -1;
			}
			st2.pop();
			return st1.top();
		}
		bool empty()
		{
			if(st1.empty() && st2.empty())
				return true;
			else
				return false;
		}
};
int main()
{
	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	cout<<q.pop()<<endl;
	q.push(5);
	
}*/


//queue implementation

/*#include<iostream>
using namespace std;
class queue{
	int *arr;
	int front;
	int rear;
	int size;
	public:
		queue()
		{
			size=1010001;
			arr=new int[size];
			front=0;
			rear=0;
		}
		void enqueue(int x)
		{
			if(rear==size)
			{
				cout<<"queue is full ";
			}
			else
			{
				arr[rear]=x;
				rear++;
			}
		}
		int dequeue()
		{
			if(front == rear)
			{
				return -1;
			}
			else
			{
				int ans=arr[front];
				front++;
				if(front==rear)
				{
					front=0;
					rear=0;
				}
				return ans;
			}
		}
		int first()
		{
			if(front == rear)
			{
				cout<<"queue is empty ";
				return -1;
			}
			else
			{
				return arr[front];
			}
		}
		bool empty()
		{
			if(front == rear)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};
int main()
{
	queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	
	cout<<q.first()<<endl;
	
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	
	cout<<q.first()<<endl;
}*/

//Queue using linked list
/*#include<iostream>
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
*/

//circular queue

/*#include<iostream>
using namespace std;
class cqueue{
	public:
	int *arr;
	int size;
	int front;
	int rear;
	cqueue()
	{
		size=5;
		arr=new int[size];
		front=-1;
		rear=-1;
	}
	bool isempty()
	{
		if(front==-1 && rear==-1)
			return true;
		else
			return false;
	}
	void enqueue(int x)
	{
		if((rear+1)%size == front)
			cout<<"queue is full "<<endl;
		else if(front==-1)
			front=0;
		rear=(rear+1)%size;
		arr[rear]=x;
	}
	void dequeue()
	{
		if(isempty())
		{
			cout<<"queue is empty";
		}
		else if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front=(front+1)%size;
		}
	}
	int showfront()
	{
		if(isempty())
			cout<<"empty queue ";
		else
			cout<<arr[front];
	}

};
int main()
{
	cqueue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	
	q.dequeue();
	q.enqueue(60);
	q.enqueue(90);
	q.showfront();
	
}*/


