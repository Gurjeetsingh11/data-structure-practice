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

void inserthead(Node *&head,int d)
{
	Node*temp=new Node(d);
	temp->next=head;
	head=temp;
}

Node *reverse(Node *&head)
{
	Node *curr=head;
	Node *prev=NULL;
	Node *forward;
	while(curr != NULL)
	{
		forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
	}
	return prev;
}


//detect cycle in linked list
bool detectcycle(Node *&head)
{
	Node *slow=head;
	Node *fast=head;
	while(fast != NULL && fast->next != NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(fast==slow)
		{
			return true;			
		}	
	}
	return false;
}

//make cycle in linked list

void makecycle(Node *&head,int pos)
{
	int count=1;
	Node *temp=head;
	Node *startnode;
	while(temp->next!=NULL)
	{
		if(count==pos)
		{
			startnode=temp;
		}
		temp=temp->next;
		count++;
	}
	temp->next=startnode;
}

//remove cycle in linked list

void removecycle(Node*&head)
{
	Node *fast=head;
	Node *slow=head;
	do{
		slow=slow->next;
		fast=fast->next->next;
	}while(slow!=fast);
	
	slow=head;
	while(slow->next != fast->next)
	{
		slow=slow->next;
		fast=fast->next;
	}
	fast->next=NULL;
}
void print(Node *head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	Node *node1=new Node(1);
	Node *head=node1;
	inserthead(head,2);
	inserthead(head,3);
	inserthead(head,4);
	inserthead(head,5);
	inserthead(head,6);
	inserthead(head,7);
	inserthead(head,8);
	
	print(head);
	
	makecycle(head,3);
	cout<<detectcycle(head)<<endl;
	removecycle(head);
	cout<<detectcycle(head)<<endl;
	print(head);
}
