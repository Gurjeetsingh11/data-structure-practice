#include<iostream>
#include<queue>
using namespace std;
class Node{
	public:
		int data;
		Node *left;
		Node *right;
	Node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};

Node *buildtree(Node *root)
{
	int data;
	cout<<"enter the data :";
	cin>>data;
	root=new Node(data);
	if(data==-1)
	{
		return NULL;
	}
	cout<<"enter data for inserting in left :"<<endl;
	root->left=buildtree(root->left);
	cout<<"enter data for inserting in right :"<<endl;
	root->right=buildtree(root->right);
	
	return root;
}

void levelorder(Node*root)
{
	queue<Node*>q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty())
	{
		Node *temp=q.front();
		q.pop();
	
		if(temp==NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			cout<<temp->data<<" ";
			if(temp->left)
			{
				q.push(temp->left);
			}
			if(temp->right)
			{
				q.push(temp->right);
			}
		}	
	}
}
int main()
{
	Node *root=NULL;
	
	buildtree(root);
	
	cout<<"level order :"<<endl;
	levelorder(root);
}
