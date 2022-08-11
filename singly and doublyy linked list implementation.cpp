//singly linked list
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
	~Node()
	{
		int val=data;
		while(next!=NULL)
		{
			delete next;
			next=NULL;
		}
		cout<<"memory free for :"<<val<<endl;
	}
};
void inserthead(Node *&head,Node *&tail,int d)
{
	if(head==NULL)
	{
		Node *temp=new Node(d);
		head=temp;
		tail=temp;
	}
	else
	{
		Node *temp=new Node(d);
		temp->next=head;
		head=temp;
	}
}
void inserttail(Node*&head,Node*&tail,int d)
{
	if(tail==NULL)
	{
		Node *temp=new Node(d);
		tail=temp;
		head=temp;
	}
	else
	{
		Node *temp=new Node(d);
		tail->next=temp;
		tail=temp;
	}
}
void insertmid(Node *&head,Node *&tail,int pos,int d)
{
	if(pos==1)
	{
		inserthead(head,tail,d);
		return;
	}
	Node *temp=head;
	int count=1;
	while(count<pos-1)
	{
		temp=temp->next;
		count++;
	}
	if(temp->next==NULL)
	{
		inserttail(head,tail,d);
		return;
	}
	Node *nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next=nodetoinsert;
}
int getlength(Node *&head)
{
	Node *temp=head;
	int len=0;
	while(temp!=NULL)
	{
		len++;
		temp=temp->next;		
	}
	return len;
}
void deltenode(Node *&head,Node *&tail,int pos)
{
	if(pos==1)
	{
		Node *temp=head;
		head=head->next;
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
void print(Node *&head)
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
	Node *head=NULL;
	Node *tail=NULL;
	inserthead(head,tail,10);
	inserthead(head,tail,20);
	inserthead(head,tail,30);
	
	inserttail(head,tail,40);
	inserttail(head,tail,50);
	inserttail(head,tail,60);
	
	insertmid(head,tail,1,100);
	insertmid(head,tail,4,200);
	insertmid(head,tail,9,500);
	print(head);cout<<"length of list : "<<getlength(head)<<endl;
	
	deltenode(head,tail,1);
	print(head);cout<<"length of list : "<<getlength(head)<<endl;
	
	deltenode(head,tail,4);
	print(head);cout<<"length of list : "<<getlength(head)<<endl;
	
	deltenode(head,tail,7);
	print(head);
	cout<<"length of list : "<<getlength(head)<<endl;
}

//doubly linked list

/*#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node *prev;
	Node(int d)
	{
		data=d;
		prev=NULL;
		next=NULL;		
	}
	~Node()
	{
		int value=data;
		while(next!=NULL)
		{
			delete next;
			next=NULL;
		}
		cout<<"memory free for : "<<value<<endl;
	}
};
void inserthead(Node *&head,Node *&tail,int d)
{
	if(head==NULL)
	{
		Node *temp=new Node(d);
		head=temp;
		tail=temp;
	}
	else
	{
		Node *temp=new Node(d);
		temp->next=head;
		head->prev=temp;
		head=temp;
	}
}
void inserttail(Node*&head,Node*&tail,int d)
{
	if(tail==NULL)
	{
		Node*temp=new Node(d);
		tail=temp;
		head=temp;
	}
	else
	{
		Node *temp=new Node(d);
		tail->next=temp;
		temp->prev=tail;
		tail=temp;
	}
}
int getlength(Node *&head)
{
	int len=0;
	Node *temp=head;
	while(temp!=NULL)
	{
		len++;
		temp=temp->next;
	}
	return len;
}
void insertmid(Node *&head, Node*&tail, int pos, int d)
{
	
	if(pos==1)
	{
		inserthead(head,tail,d);
		return;
	}
	Node*temp=head;
	int count=1;
	while(count<pos-1)
	{
		temp=temp->next;
		count++;
	}
	if(temp->next==NULL)
	{
		inserttail(head,tail,d);
		return;
	}
	Node *nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next->prev=nodetoinsert;
	temp->next=nodetoinsert;
	nodetoinsert->prev=temp;	
}

void deletenode(Node*&head,Node*&tail,int pos)
{
	if(pos==1)
	{
		Node *temp=head;
		temp->next->prev=NULL;
		head=temp->next;
		temp->next=NULL;
		delete temp;
	}
	else
	{
		Node *prev=NULL;
		Node *curr=head;
		int count=0;
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
print(Node *&head)
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
	Node *head=NULL;
	Node *tail=NULL;
	
	inserthead(head,tail,10);
	inserthead(head,tail,20);
	inserthead(head,tail,30);
	
	inserttail(head,tail,40);
	inserttail(head,tail,50);
	inserttail(head,tail,60);
	
	insertmid(head,tail,3,100);
	insertmid(head,tail,1,200);
	insertmid(head,tail,9,500);
	print(head);cout<<"length of linked list is :"<<getlength(head)<<endl;
	deletenode(head,tail,1);print(head);cout<<"length of linked list is :"<<getlength(head)<<endl;
	deletenode(head,tail,4);print(head);cout<<"length of linked list is :"<<getlength(head)<<endl;
	deletenode(head,tail,6);
	print(head);
		
	cout<<"length of linked list is :"<<getlength(head);
}*/
