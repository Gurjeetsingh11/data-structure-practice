//CIRCULAR QUEUE

/*#include<iostream>
using namespace std;
class cqueue{
	public:
	int size;
	int front;
	int rear;
	int *arr;
	cqueue(int size)
	{
		size=size;
		front=-1;
		rear=-1;
		arr=new int[size];
	}
	
	void enque(int element)
	{
		if((rear+1)%size==front)
		{
			cout<<"queue is full";
		}
		else if(front=-1 && rear==-1)
		{
			front=rear=0;
			arr[front]=element;
		}
		else
		{
			rear=(rear+1)%size;
			arr[rear]=element;
		}
	}
	
	void deque()
	{
		if(front==-1 && rear==-1)
		{
			cout<<"queue is empty";
			return;
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
	int peek()
	{
		if(front==-1 && rear==-1)
		{
			cout<<"empty queue ";
		}
		else
		{
			 return arr[front];
		}
	}
	int display()
	{
		int x=front;
		if(front==-1 && rear==-1)
		{
			cout<<"queue is empty";
		}
		else
		{
			while(x!=rear)
			{
				return arr[x];
				x=(x+1)%size;
			}
		}
		return arr[front];
	}
};
int main()
{
	cqueue q(5);
	q.enque(1);
	q.enque(2);
	q.enque(3);
	q.enque(4);
	q.deque();
	cout<<q.peek();
	q.display();
}*/

//DOUBLE ENDED QUEUE
#include<iostream>
using namespace std;
class dqueue{
	public:
		int size;
		int rear;
		int front;
		int *arr;
	dqueue(int size)
	{
		size=size;
		rear=-1;
		front=-1;
		arr=new int[size];
	}
	
	
	int enquefront(int element)
	{
		 if((front==0 && rear==size-1) && (front==rear+1))
		 {
		 	cout<<"queue is full";
		 	return -1;
			 }    
		else if(front==-1 && rear==-1)
		{
			front=rear=0;
			arr[front]=element;
		}
		else if(front==0)
		{
			front==size-1;
			arr[front]=element;
		}
		else
		{
			front--;
			arr[front]=element;
		}
	}
	int enquerear(int element)
	{
		if((front==-1 && rear==size-1) || (front=rear+1))
		{
			cout<<"queue is full";
			return -1;
		}
		else if(front=-1 && rear==-1)
		{
			front=rear=0;
			arr[rear]=element;
		}
		else if(rear=size-1)
		{
			rear=0;
			arr[rear]=element;
		}
		else
		{
			rear++;
			arr[rear]=element;
		}
	}
	void getfront()
	{
		if(front==-1 && rear==-1)
		{
			cout<<"queue is empty";
		}
		arr[front];
	}
	void getrear()
	{
		if(front==-1 && rear==-1)
		{
			cout<<"queue is empty";
		}
		else
		{
			arr[rear];
		}
	}
	
	void dequefront()
	{
		if(front==-1 && rear==-1)
		{
			cout<<"queue is emppty";
			return;
		}
		else if(front==rear)
		{
			front=rear=-1;
		}
		else if(front==size-1)
		{
			front=0;
		}
		else
		{
			front++;
		}
	}
	
	void dequerear()
	{
		if(front==-1 && rear==-1)
		{
			cout<<"empty queue";
			return;
		}
		else if(front==rear)
		{
			front=rear=-1;
		}
		else if(rear==0)
		{
			rear=size-1;
		}
		else
		{
			rear--;
		}
	}
};
int main()
{
	dqueue q(5);
	q.enquefront(5);
	q.enquefront(10);
	q.enquerear(50);
	q.enquerear(60);
}
