//factorial

/*#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n==0)
		return 1;
	
/*	int fact=factorial(n-1);
	int tot=n*fact;
	
	return n*factorial(n-1);
	
}
int main()
{
	 int n;
	 cin>>n;
	 cout<<factorial(n);
}*/

//power base 
/*#include<iostream>
using namespace std;
int power(int n)
{
	//base case
	if(n==0)
		return 1;
/*	int multiply=power(n-1);
	int total=2*multiply;
	return total;
	
	//recursion relation
	return 2*power(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<power(n);
}*/

//counting number 
/*#include<iostream>
using namespace std;
void count(int n)
{
	if(n==0)
		return ;
/*	cout<<n;
	count(n-1);
	
	count(n-1);
	cout<<n<<" ";
}
int main()
{
	int n;
	cin>>n;
	count(n);
	
	return 0;
}*/


//fabbonacci number 

/*#include<iostream>
using namespace std;
int fib(int n)
{
	//base case 
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	
	int ans=fib(n-1)+fib(n-2);
	
	return ans;
}
int main()
{
	int n;
	cin>>n;
	fib(n);
}
*/

//say digit - 421 - four two one

/*#include<iostream>
#include<string>
using namespace std;
void say(int n,string a[])
{
	//base case 
	if(n==0)
		return;
	
	//processing 
	
	int digit=n%10;
	n=n/10;
	
	//RR
	say(n,a);
	
	cout<<a[digit]<<" ";
	
	
}
int main()
{
	
	int n;
	cin>>n;
	string a[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	cout<<endl;
	say(n,a);
	
	return 0;
}*/


//is array sorted ???

/*#include<iostream>
using namespace std;
bool issorted(int ar[],int size)
{
//	base case
	if(size==0 || size==1)
		return true;
	if(ar[0]>ar[1])
	{
		return false;		
	}
	else
	{
		int check=issorted(ar+1,size-1);
		return check;		
	}		
}

int main()
{
	int ar[5]={1,2,3,4,5};
	int size=5;
	
	int ans=issorted(ar,size);
	
	if(ans)
		cout<<"sorted array"<<endl;
	else
		cout<<"not sorted array"<<endl;
		
}*/

//sum of array element
/*#include<iostream>
using namespace std;
int getsum(int arr[],int size)
{
//	base case
	if(size==0)
		return 0;
	if(size==1)
	{
		return arr[0];
	}
	else
	{
		int remaining=getsum(arr+1,size-1);
		int sum=arr[0]+remaining;
		return sum;
	}
}

int main()
{
	int arr[5]={8,8,8,8,8};
	int size=5;
	int sum=getsum(arr,size);
	cout<<"sum  : "<<sum;
}*/

//linearsearch using recursion
/*#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key)
{
	if(size==0)
		return false;
	if(arr[0]==key)
	{
		return true;
	}
	else
	{
		int rem=linearsearch(arr+1,size-1,key);
		return rem;
	}
}

int main()
{
	int arr[5]={1,2,2,4,5};
	int size=5;
	int key=3;
	
	int ans=linearsearch(arr,size,key);
	if(ans)
	{
		cout<<"key found"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}	
}*/

//binary search using recursion 
/*#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int key)
{
	//base case
	if(s>e)
		return false;
		
	int mid=s+(e-s)/2;
	
	if(arr[mid]==key)
	{
		return true;
	}
	if(arr[mid]<key)
	{
		return binarysearch(arr,mid+1,e,key);
	}
	else
	{
		return binarysearch(arr,s,mid-1,key);
	}
	
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int size=5;
	int key=9;
	cout<<binarysearch(arr,0,5,key);
}*/


//reverse string using recusrsion

/*#include<iostream>
using namespace std;
void reverse(string &str,int i,int j)
{
	//base case
	if(i>j)
		return;
	swap(str[i],str[j]);
	i++;
	j--;
	reverse(str,i,j);
}
int main()
{
	string str="gurjeet";
	
	reverse(str,0,str.length()-1);
	cout<<str;
}*/

//palindrome using recursion

/*#include<iostream>
using namespace std;
bool checkpalindrome(string str,int i,int j)
{
	//base case
	if(i>j)
		return true;
	if(str[i]!=str[j])
	{
		return false;		
	}
	else
	{
		return checkpalindrome(str,i+1,j-1);
	}
	
	
}
int main()
{
	string str="ssoss";
	
	bool ispalindrome=checkpalindrome(str,0,str.length()-1);
	if(ispalindrome)
	{
		cout<<"palindrome ";
	}
	else
	{
		cout<<"not palindrome ";
	}
}*/

//power using recursion
/*#include<iostream>
using namespace std;
int power(int a,int b)
{
	//base case 
	if(b==0)
		return 1;
	if(b==1)
		return a;
	//recursion call
	int ans=power(a,b/2);
	if(b%2==0)
	{
	return ans*ans;		
	}
	else
	{
	return a*ans*ans;		
	}

	
}
int main()
{
	int a,b;
	cin>>a>>b;
	int ans=power(a,b);
	cout<<ans;
}*/

//bubble sort using recusrsion

/*#include<iostream>
using namespace std;
int bubblesort(int arr[],int n)
{
	//base case
	if(n==0 || n==1)
		return 1;

	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			swap(arr[i],arr[i+1]);			
		}
	}
	return bubblesort(arr,n-1);
}

int main()
{
	int arr[5]={9,5,6,3,2};
	
	bubblesort(arr,5);
	
	for(int i=0;i<5;i++)
		cout<<arr[i]<<" ";
}*/


/*#include<iostream>
using namespace std;
int print(int n)
{
	if(n==0 || n==10)
		return 0;
	print(n);
	print(n+1);
}
int main()
{
	int n;
	cin>>n;
	cout<<print(n);
}*/

#include <iostream>  
using namespace std;  
void change(int data);  
int main()  
{  
int data = 3;  
change(data);  
cout << "Value of the data is: " << data<< endl;  
return 0;  
}  
void change(int &data)  
{  
data = 5;  
}  
