//insertion in linked list---

/*#include<iostream>
using namespace std;

//creating Node

class Node{
	public:
		int data;
		Node * next;
		
//constructor	
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
	}
};

void inserthead(Node* &head,int d)
{
	//create a new node when new data diya hai
	Node * temp=new Node(d);
	temp->next=head;
	head=temp;
	
}
void inserttail(Node* &tail,int d)
{
	//new node create krege
	Node * temp=new Node(d);
	tail->next=temp;
	tail=temp;
}
void insertmiddle(Node* &tail,Node* &head,int position,int d)
{
	//insert at start
	if(position==1)
	{
		inserthead(head,d);
		return;
	}
	Node*temp=head;
	int count=1;
	while(count<position-1)
	{
		temp=temp->next;
		count++;
	}
	//inserting at last
	if(temp->next==NULL)
	{
		inserttail(tail,d);
		return;
	}	
	
	//creating a new node
	Node* nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next=nodetoinsert;
}

//search of element in linked list

bool search(Node*& head,int key)
{
	Node * temp=head;
	while(temp!=NULL)
	{
		if(temp->data == key)
		{
			return true;			
		}
	temp=temp->next;
	}return false;
}

print(Node * &head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	//creates a new node
	Node *node1=new Node(20);
	
//	cout<<node1->data<<endl;
//	cout<<node1->next<<endl;
	
	//point node to head
	Node* head=node1;
	Node* tail=node1;
	
	print(head);
	
	inserthead(head,15);
	print(head);
	
	inserttail(tail,50);
	print(head);
	
	
	insertmiddle(tail,head,4,22);
	print(head);
	insertmiddle(tail,head,5,28);
	print(head);
	
	cout<<search(head,22)<<endl;
	
	cout<<"head "<<head->data<<endl;
	cout<<"tail "<<tail->data<<endl;
	
}*/


//deletion in linked list-----------------

/*#include<iostream>
using namespace std;

//creating Node

class Node{
	public:
		int data;
		Node * next;
		
//CONSTRUCTOR	
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
	}
	
//DESTRUCTOR
	~Node()
	{
		int value=this->data;
		if(this->next!=NULL)
		{
			delete next;
			this->next=NULL;
		}	cout<<"memory is free for"<<value<<endl;
	}

};

void inserthead(Node* &head,int d)
{
	//create a new node when new data diya hai
	Node * temp=new Node(d);
	temp->next=head;
	head=temp;
	
}
void inserttail(Node* &tail,int d)
{
	//new node create krege
	Node * temp=new Node(d);
	tail->next=temp;
	tail=temp;
}
void insertmiddle(Node* &tail,Node* &head,int position,int d)
{
	//insert at start
	if(position==1)
	{
		inserthead(head,d);
		return;
	}
	Node*temp=head;
	int count=1;
	while(count<position-1)
	{
		temp=temp->next;
		count++;
	}
	//inserting at last
	if(temp->next==NULL)
	{
		inserttail(tail,d);
		return;
	}	
	
	//creating a new node
	Node* nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next=nodetoinsert;
}

void deletenode(int pos,Node* &head)
{
	//deleting the head node
	if(pos==1)
	{
		Node* temp=head;
		head=head->next;
		//free memory
		temp->next=NULL;
		delete temp;
	}
	else
	{
		Node *curr=head;
		Node *prev=NULL;
		int count=1;
		while(count<pos)
		{
			prev=curr;
			curr=curr->next;
			count++;
		}
		prev->next=curr->next;
		curr->next=NULL;
		delete curr;
	}
}
print(Node * &head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	//creates a new node
	Node *node1=new Node(20);
	
//	cout<<node1->data<<endl;
//	cout<<node1->next<<endl;
	
	//point node to head
	Node* head=node1;
	Node* tail=node1;
	
	print(head);
	
	inserthead(head,15);
	print(head);
	
	inserttail(tail,50);
	print(head);
	
	insertmiddle(tail,head,4,22);
	print(head);
	insertmiddle(tail,head,5,28);
	print(head);
	
	deletenode(1,head);
	print(head);
	
	deletenode(4,head);
	print(head);
	cout<<"head "<<head->data<<endl;
	cout<<"tail "<<tail->data<<endl;
	
}*/


//reverse a linked list


/*#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
	}
};
void inserthead(Node*&head ,int d)
{
	Node* temp=new Node(d);
	temp->next=head;
	head=temp;
}

Node* reverselist(Node* &head)
{	
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	Node * prev=NULL;
	Node * curr=head;
	Node * forward;
	while(curr != NULL)
	{
		forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;	
	}
	return prev;
}
print(Node* &head)
{
	Node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	Node * node1=new Node(10);
	Node* &head=node1;
	
	inserthead(head,20);
	inserthead(head,30);
	inserthead(head,40);
	
	print(head);
	
	Node* newhead=reverselist(head);
	print(newhead);
	
}
*/

//middle of the linked list

/*#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
	}
};
void inserthead(Node*&head ,int d)
{
	Node* temp=new Node(d);
	temp->next=head;
	head=temp;
}

Node *middle(Node *head)
{
	Node *slow=head;
	Node *fast=head;
	while(fast!=NULL || fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}
print(Node* &head)
{
	Node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	Node * node1=new Node(10);
	Node* &head=node1;
		inserthead(head,20);
	inserthead(head,30);
	inserthead(head,40);
	
	print(head);
	
	cout<<middle(head);
}*/

//REverse k nodes in linked list

/*#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
	}
};
void inserthead(Node*&head ,int d)
{
	Node* temp=new Node(d);
	temp->next=head;
	head=temp;
}

Node *kreverse(Node* &head,int k)
{
	
	Node *curr=head;
	Node *prev=NULL;
	Node *next;
	int count=0;
	while(curr!=NULL && count<k)
	{
		next=curr->next;
		curr->next=prev;
		curr=next;
		prev=curr;
		count++;
	}
	if(next!=NULL)
	{
		head->next=kreverse(next,k);
	}
	return prev;
}

print(Node* &head)
{
	Node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	Node * node1=new Node(10);
	Node* &head=node1;
	inserthead(head,20);
	inserthead(head,30);
	inserthead(head,40);
	inserthead(head,50);	
	print(head);
	
}*/


//Remove duplicates from the linked list

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

void inserthead(Node *&head,int d)
{
	Node*temp=new Node(d);
	temp->next=head;
	head=temp;
}
Node* checkduplicate(Node *&head)
{
	Node *curr=head;
	while(curr!=NULL && curr->next!=NULL)
	{
		if(curr->data == curr->next->data)
		{
			Node *next_next=curr->next->next;
			Node *todelete=curr->next;
			delete todelete;
			curr->next=next_next;	
		}
		else
		{
			curr=curr->next;
		}	
	}
	return head;	
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
	inserthead(head,2);
	inserthead(head,3);
	inserthead(head,3);
	inserthead(head,4);
	inserthead(head,4);
	inserthead(head,4);
	
	print(head);
	Node *newhead=checkduplicate(head);
	print(newhead);
	
}*/
