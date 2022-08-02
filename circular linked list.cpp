//insertion in circular linked list

/*#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node * next;
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
	}
	~Node()
	{
		int value=this->data;
		if(this->next!=NULL)
		{
			delete next;
			next=NULL;
		}
		cout<<"memory is free for : "<<value<<endl;
	}
};
void insertnode(Node* &tail,int element,int d)
{
	//empty list
	if(tail==NULL)
	{
		Node* newnode=new Node(d);
		tail=newnode;
		newnode->next=newnode;
	}
	
	//non empty list	
	else
	{
		Node*curr=tail;
		while(curr->data!=element)
		{
			curr=curr->next;
		}
		//element found
		Node * temp=new Node(d);
		temp->next=curr->next;
		curr->next=temp;
		
	}
}
void print(Node * &tail)
{
	Node* temp=tail;
	do{
		cout<<tail->data<<" ";
		tail=tail->next;
	}
	while(tail!=temp);
	cout<<endl;
}
int main()
{
	Node* tail=NULL;
	
	//emptylist
	insertnode(tail,5,3);
	print(tail);
	
	insertnode(tail,3,5);
	print(tail);
	
	insertnode(tail,5,7);
	print(tail);
	
	insertnode(tail,3,9);
	print(tail);
	
	insertnode(tail,9,8);
	print(tail);
	
	insertnode(tail,8,9);
	print(tail);
	
}
*/


//deletion in circular linked list
#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node * next;
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
	}
	~Node()
	{
		int value=this->data;
		if(this->next!=NULL)
		{
			delete next;
			next=NULL;
		}
		cout<<"memory is free for : "<<value<<endl;
	}
};
void insertnode(Node* &tail,int element,int d)
{
	//empty list
	if(tail==NULL)
	{
		Node* newnode=new Node(d);
		tail=newnode;
		newnode->next=newnode;
	}
	
	//non empty list	
	else
	{
		Node*curr=tail;
		while(curr->data!=element)
		{
			curr=curr->next;
		}
		//element found
		Node * temp=new Node(d);
		temp->next=curr->next;
		curr->next=temp;
		
	}
}
void deletenode(Node* &tail,int value)
{
	
	//list is empty
	if(tail==NULL)
	{
		cout<<"empty list "<<endl;
		return;
	}
	//non empty list
	else
	{
		Node* prev=tail;
		Node* curr=prev->next;
		while(curr->data != value)
		{
			prev=curr;
			curr=curr->next;
		}
		prev->next=curr->next;
		curr->next=NULL;
		delete curr;
		//1node
		if(curr==prev)
		{
			tail=NULL;
		}
		//>2
		if(tail==curr)
		{
			tail=prev;
		}
		
	}
}
void print(Node * &tail)
{
	Node* temp=tail;
	if(tail==NULL)
	{
		cout<<"list is empty";
		return;
	}
	do{
		cout<<tail->data<<" ";
		tail=tail->next;
	}
	while(tail!=temp);
	cout<<endl;
}
int main()
{
	Node* tail=NULL;
	
	//emptylist
	insertnode(tail,5,3);
	print(tail);
	
	insertnode(tail,3,5);
	print(tail);
	
	insertnode(tail,5,7);
	print(tail);
	
	insertnode(tail,3,9);
	print(tail);
	
	insertnode(tail,9,8);
	print(tail);
	
	insertnode(tail,8,9);
	print(tail);
	
	deletenode(tail,3);
	print(tail);
	
}


