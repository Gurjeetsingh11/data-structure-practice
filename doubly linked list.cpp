//insertion in doubly linked list - mid , head, tail

/*#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node* prev;
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
		this->prev=NULL;
	}
};
int inserthead(Node* &tail,Node* &head,int d)
{
	if(head==NULL)
	{
		Node*temp=new Node(d);
		head=temp;
		tail=temp;
	}
	else
	{
	//creating node
	Node * temp=new Node(d);
	temp->next=head;
	head->prev=temp;
	head=temp;	
	}
	
}
int inserttail(Node* &tail,Node* &head,int d)
{
	if(tail==NULL)
	{
		Node*temp=new Node(d);
		tail=temp;
		head=temp;
	}
	else
	{
	//creating node
	Node*temp=new Node(d);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
	}
	
}
void insertposition(Node* &tail,Node*&head,int pos,int d)
{
	if(pos==1)
	{
		inserthead(tail,head,d);
		return ;
	}
	//temp node pointing to head
	
	Node*temp=head;
	int count=1;
	while(count<pos-1)
	{
		temp=temp->next;
		count++;
	}
	if(temp->next==NULL)
	{
		inserttail(tail,head,d);
		return ;
	}
	//creating a new node
	
	Node* nodetoinsert=new Node(d);
	
	nodetoinsert->next=temp->next;
	temp->next->prev=nodetoinsert;
	temp->next=nodetoinsert;
	nodetoinsert->prev=temp;
}
void print(Node* &head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int getlength(Node* &head)
{
	int len=0;
	Node* temp=head;
	
	while(temp!=NULL)
	{
		len++;
		temp=temp->next;
	}
	return len;
}
int main()
{
	//Node* node1=new Node(10);
	
	Node* head = NULL;
	Node* tail = NULL;
	print(head);
	
	inserthead(tail,head,10);
	print(head);
	
	inserthead(tail,head,20);
	print(head);
	
	inserttail(tail,head,25);
	print(head);
	
	inserttail(tail,head,30);
	print(head);
	
	insertposition(tail,head,2,60);
	print(head);
	
	insertposition(tail,head,1,50);
	print(head);
	cout<<"length of linked list : "<<getlength(head)<<endl;
}*/



//deletion of node - beg,mid ,last
#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node* prev;
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
		this->prev=NULL;
	}
	~Node()
	{
		int value=this->data;
		if(next!=NULL)
		{
			delete next;
			next=NULL;
		}
		cout<<"memory free for the data : "<<value<<endl;
	}
};
int inserthead(Node* &tail,Node* &head,int d)
{
	if(head==NULL)
	{
		Node*temp=new Node(d);
		head=temp;
		tail=temp;
	}
	else
	{
	//creating node
	Node * temp=new Node(d);
	temp->next=head;
	head->prev=temp;
	head=temp;	
	}
	
}
int inserttail(Node* &tail,Node* &head,int d)
{
	if(tail==NULL)
	{
		Node*temp=new Node(d);
		tail=temp;
		head=temp;
	}
	else
	{
	//creating node
	Node*temp=new Node(d);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
	}
	
}
void insertposition(Node* &tail,Node*&head,int pos,int d)
{
	if(pos==1)
	{
		inserthead(tail,head,d);
		return ;
	}
	//temp node pointing to head
	
	Node*temp=head;
	int count=1;
	while(count<pos-1)
	{
		temp=temp->next;
		count++;
	}
	if(temp->next==NULL)
	{
		inserttail(tail,head,d);
		return ;
	}
	//creating a new node
	
	Node* nodetoinsert=new Node(d);
	
	nodetoinsert->next=temp->next;
	temp->next->prev=nodetoinsert;
	temp->next=nodetoinsert;
	nodetoinsert->prev=temp;
}

void deletenode(int pos,Node* &head)
{
	//deletion at head
	
	 if(pos==1)
	 {
	 	Node*temp=head;
	 	temp->next->prev=NULL;
	 	head=temp->next;
	 	temp->next=NULL;
	 	delete temp;
	 }
	 else
	 {
	 	Node*curr=head;
	 	Node*prev=NULL;
	 	
	 	int count=1;
	 	while(count<pos)
	 	{
	 		prev=curr;
	 		curr=curr->next;
	 		count++;
		}
		curr->prev=NULL;
		prev->next=curr->next;
		curr->next=NULL;
		delete curr;
	 }
}



void print(Node* &head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int getlength(Node* &head)
{
	int len=0;
	Node* temp=head;
	
	while(temp!=NULL)
	{
		len++;
		temp=temp->next;
	}
	return len;
}
int main()
{
	//Node* node1=new Node(10);
	
	Node* head = NULL;
	Node* tail = NULL;
	print(head);
	
	inserthead(tail,head,10);
	print(head);
	
	inserthead(tail,head,20);
	print(head);
	
	inserttail(tail,head,25);
	print(head);
	
	inserttail(tail,head,30);
	print(head);
	
	insertposition(tail,head,2,60);
	print(head);
	
	insertposition(tail,head,1,50);
	print(head);
	
	deletenode(1,head);
	print(head);
	deletenode(2,head);
	print(head);
	cout<<"length of linked list : "<<getlength(head)<<endl;
}
