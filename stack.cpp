/*#include<iostream>
#include<stack>
using namespace std;
int main()
{
	//creation of stack
	stack<int>st;
	//insertion in stack
	st.push(2);
	st.push(3);
	//deletion in stack
	st.pop();
	
	//checking for empty stack
	
/*	if(st.empty())
		cout<<"empty";
	else
		cout<<"not empty";
	
	cout<<st.size();
	
}*/


//inplementation of stack using linked list
/*#include<iostream>
using namespace std;

class stack{
	public:
		int *arr;
		int size;
		int top;
	stack(int size)
	{
		this->size=size;
		arr =new int[size];
		top=-1;
	}
	void push(int element)
	{
		if((size-top)>1)
		{
			top++;
			arr[top]=element;
		}
		else
		{
			cout<<"array over flow";
		}
	}
	void pop()
	{
		if(top>=0)
		{
			top--;
		}
		else
		{
			cout<<"stack underflow";
		}
	}
	int peek()
	{
		if(top>=0)
		{
			return arr[top];
		}
		else
		{
			cout<<"empty stack "<<endl;
			return -1;
		}
	}
	bool empty()
	{
		if(top==-1)
		{
			return true;
		}
		else{
			return false;
		}
	}
};

int main()
{
	stack s(5);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout<<s.peek()<<endl;
	s.pop();
	cout<<s.peek()<<endl;
	s.pop();
	cout<<s.peek()<<endl;
	
	if(s.empty())
	{
		cout<<"empty";
	}
	else
	{
		cout<<"no empty";
	}
}*/


//2 stacks in array
#include<iostream>
using namespace std;

class stack{
	public:
		int *arr;
		int top1;
		int top2;
		int size;
	stack(int size)
	{
		this->size=size;
		arr =new int[size];
		int top1=-1;
		int top2=size;
	}
	void push1(int element)
	{
		if((top2-top1)>1)
		{
			top1++;
			arr[top1]=element;
		}		
		else
		{
			cout<<"stack1 overflow";
		}
	}
	void push2(int element)
	{
		if((top2-top1)>1)
		{
			top2--;
			arr[top2]=element;
		}
		else
		{
			cout<<"stack2 overflow"<<endl;
		}
	}
	int pop1()
	{
		if(top1>=0)
		{
			int ans=arr[top1];
			top1--;
			return ans;
		}
		else
		{
			cout<<"stack1 underflow";
		}
	}
	int pop2()
	{
		if(top2<size)
		{
			top2++;
			int ans=arr[top2];
			return ans;
		}
		else
		{
			cout<<"stack underflow";
		}
	}
};

int main()
{
	stack st(5);
	st.push1(20);
	st.pop1();
	cout<<st.top1<<endl;
	
}
