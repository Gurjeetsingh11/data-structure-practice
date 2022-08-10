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
/*#include<iostream>
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
	
}*/


//reverse a sentence
/*#include<iostream>
#include<stack>
using namespace std;
void reversesentence(string s)
{
	stack<string>st;
	for(int i=0;i<s.length();i++)
	{
		string word="";
		while(s[i]!=' '&&i<s.length())
		{
			word+=s[i];
			i++;
		}
		st.push(word);
	}
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
}
int main()
{
	string s;
	getline(cin,s);
	reversesentence(s);
}*/

//reverse a stack
/*#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&st,int ele)
{
	if(st.empty())
	{
		st.push(ele);
		return;
	}
	int topele=st.top();
	st.pop();
	insertatbottom(st,ele);
	st.push(topele);
}
void reverse(stack<int>&st)
{
	if(st.empty())
	{
		return;
	}
	int ele=st.top();
	st.pop();
	reverse(st);
	insertatbottom(st,ele);
}
int main()
{
	stack<int>st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	
	cout<<st.top()<<endl;
	reverse(st);
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop(); 
	}
	cout<<endl;
}*/

















//prefix evaluation
/*#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int prefixevaluation(string s)
{
	stack<int>st;
	for(int i=s.length()-1;i>=0;i--)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			st.push( s[i] -'0');
		}
		else
		{
			//element jab stack me push krege uske element pop krne ke pehle op1 and pop krke op2 mein dalege
			int op1=st.top();
			st.pop();
			int op2=st.top();
			st.pop();
			
			switch(s[i])
			{
				case '+':
					st.push(op1+op2);
					break;
				case '-':
					st.push(op1-op2);
					break;
				case '*':
					st.push(op1*op2);
					break;
				case '/':
	  				st.push(op1/op2);
					break;
				case '^':
					st.push(pow(op1,op2));
					break;
			}
		}	
	}return st.top();
}
int main()
{
	cout<<prefixevaluation("-+7*45+20")<<endl;
}*/

//postfix evaluation
/*#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int postfixevaluation(string s)
{
	stack<int>st;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			st.push(s[i]-'0');
		}
		else
		{
			int op2=st.top();
			st.pop();
			int op1=st.top();
			st.pop();
		switch(s[i])
		{
			case '+':
				st.push(op1+op2);
				break;
			case '-':
				st.push(op1-op2);
				break;
			case '*':
				st.push(op1*op2);
				break;
			case '/':
				st.push(op1/op2);
				break;
			case '^':
				st.push(pow(op1,op2));
				break;
		}
		}
	}
	return st.top();
	
}
int main()
{
	cout<<postfixevaluation("46+2/5*7+");
}*/

//balanced parenthesis


/*#include<iostream>
#include<stack>
using namespace std;
bool isvalid(string s)
{
	int n=s.size();
	stack<char>st;
	bool ans=true;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='{' || s[i]=='[' || s[i]=='(')
		{
			st.push(s[i]);	
		}
		else if(s[i] == '}')
		{
			if(!s.empty() && st.top()=='{')
				st.pop();
			else
				ans=false;
				break;
		}
		else if(s[i]==')')
		{
			if(!st.empty() && st.top()=='('){
				st.pop();	
			}
			else{
				ans=false;
				break;				
			}

		}
		else if(s[i]==']')
		{
			if(!st.empty() && st.top()=='['){
				st.pop();				
			}
			else
			{
				ans=false;
				break;				
			}
		}	
	}
	
	if(!st.empty())
	{
		return false;
	}
	else
	{
		return ans;
	}
}
int main()
{
	string s="{([])";
	if(isvalid(s))
		cout<<"valid string ";
	else
		cout<<"invalid string";
}*/
