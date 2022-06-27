//this file contain 5 basic questions on arrays & 5 on searching and sorting

//1. max and min element in array

/*#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	cout<<"max: "<<max<<endl<<"min :"<<min;
}*/


//2. Reverse the array

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
}*/


//3. maximum subarray problem

/*#include<iostream>
using namespace std;
int subarray(int arr[],int n)
{
	int maxsum=0;
	int cursum=0;
	for(int i=0;i<n;i++)
	{
		cursum=cursum+arr[i];
		if(cursum<0)
			cursum=0;
		if(maxsum<cursum)
			maxsum=cursum;
	}
	return maxsum;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<subarray(arr,n);
}*/

/*#include<iostream>
using namespace std;
int subarray(int arr[],int n)
{
	int maxsum=0;
	int cursum=0;
	int maxstart=0;
	int maxend=0;
	int curstart=0;
	int curend=0;
	for(int i=0;i<n;i++)
	{
		cursum=cursum+arr[i];
		curend=i;
		
		if(cursum<0){
			cursum=0;
			curstart=curend+1;
		}
		if(maxsum<cursum){
			maxsum=cursum;
			maxstart=curstart;
			maxend=curend;
		}
	}
	cout<<"max subarray sum :"<<maxsum<<endl;
	cout<<"starting index :"<<maxstart<<endl;
	cout<<"ending index :"<<maxend;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<subarray(arr,n);
}*/


//5. chocolate distribution problem

/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int m;
	cin>>m;
	sort(arr,arr+n);
	int min=INT_MAX;
	for(int i=0;i+m-1<n;i++)
	{
		int d=arr[i+m-1]-arr[i];
		if(d<min)
			min=d;
	}cout<<min<<endl;
}*/

/*--------------------------------------------------------------------------------------------*/

//5 Sorting and searching problem

//permute 2 array 
/*#include<iostream>``
#include<bits/stdc++.h>
using namespace std;
ispossible(int a[],int b[],int n,int k)
{
	sort(a,a+n);
	sort(b,b+n,greater<int>());
	for(int i=0;i<n;i++)
	{
		if(a[i]+b[i]<k)
			return false;
	}return true;
}
int main()
{
	int a[]={1,2,2,1};
	int b[]={3,3,3,4};
	int k=5;
	int n=sizeof(a)/sizeof(a[0]);
	ispossible(a,b,n,k)?cout<<"yes":cout<<"no";
}*/


//2. find common element in sorted array
/*#include<iostream>
using namespace std;
int finding(int a1[],int a2[],int a3[],int n1,int n2,int n3)
{
	int i=0,j=0,k=0;
	while(i<n1 && j<n2 && k<n3)
		if(a1[i] == a2[j] && a2[j]== a3[k])
		{
			cout<<a1[i]<<" ";
			i++;
			j++;
			k++;
		}
		else if(a1[i]<a2[j])
		{
			i++;
		}
		else if(a2[j]<a3[k])
		{
			j++;
		}
		else
		{
			k++;
		}
		return 0;
}
int main()
{
	int a1[]={1,2,3,4,5};
	int a2[]={1,2,3,6,7,8};
	int a3[]={1,3,4,5,7,};
	int n1=sizeof(a1)/sizeof(a1[0]);
	int n2=sizeof(a2)/sizeof(a2[0]);
	int n3=sizeof(a3)/sizeof(a3[0]); 
	cout<<"common elements are: "<<" ";
	finding(a1,a2,a3,n1,n2,n3);
}*/

/*//4. searching in array where adjacent differ
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x,int k)
{
	int i=0;
	while(i<n)
	{
		if(arr[i]==x)
		{
			return i;
			i=i+max(1,abs(arr[i]-x)/k);
		}
	}
	
}
int main()
{
	int arr[]={2,4,5,7,7,6};
	int x=6;
	int k=2;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"element "<<x<<" is present at index :";
	search(arr,n,x,k);
	return 0;
}*/

//5. ceiling 

#include<iostream>
using namespace std;
int ceiling(int arr[],int low,int high,int x)
{
	if(x<=arr[low])
		return low;
	for(int i=low;i<high;i++)
	{
		if(arr[i]==x);
		return i;
		if(arr[i] <x && arr[i+1]>=x)
		return i+1;	
	}return -1;
	
		
}
int main()
{
	int arr[]={1,2,3,10,10,12,19};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=4;
	int index=ceiling(arr,0,n-1,x);
	if(index==-1)
		cout<<"ceiling of "<<x<<"does not exist ";
	else
		cout<<"cieling of "<<x<<"is "<<arr[index];
}
