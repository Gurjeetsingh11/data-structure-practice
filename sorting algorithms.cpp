//SELECTION SORT
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
	for(int i=0;i<n-1;i++)
	{
		int minindex=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minindex])
			{
				minindex=j;
			}
		}
		swap(arr[i],arr[minindex]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}*/

//BUBBLE SORT
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
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}*/

//insertion sort
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
	for(int i=1;i<n;i++)
	{
		int curr=arr[i];
		int j=i-1;
		while(arr[j]>curr && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=curr;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}*/

//Merge sort
/*#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
	int temp[10];
	int mid=s+(e-s)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	while(i<=mid && j<=e)
	{
		if(arr[i]<arr[j])
		{
			temp[k++]=arr[i++];
		}
		else
		{
			temp[k++]=arr[j++];
		}
		while(i<=mid)
		{
			temp[k++]=arr[i++];
		}
		while(j<=e)
		{
			temp[k++]=arr[j++];
		}
	}
	for(int i=s;i<=e;i++)
	{
		arr[i]=temp[i];
	}
}
void mergesort(int arr[],int s,int e)
{
	while(s==e)
	{
		return;
	}
	//calculating the mid
	int mid=s+(e-s)/2;
	
	//for before mid
	mergesort(arr,s,mid);
	
	//for after mid
	mergesort(arr,mid+1,e);
	
	//for merging
	merge(arr,s,e);
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
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}*/

//QUCIK SORT
#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
	int pivot=arr[s];
	int count=0;
	for(int i=s+1;i<=e;i++)
	{
		if(arr[i]<=pivot)
		{
			count++;
		}
	}
	int pivotindex=s+count;
	swap(arr[pivotindex],arr[s]);
	int i=s;
	int j=e;
	while(i<=pivotindex && j>pivotindex)
	{
		while(arr[i]<pivotindex)
		{
			i++;
		}
		while(arr[j]>pivotindex)
		{
			j--;
		}
		if(i<=pivotindex && j>pivotindex)
		{
			swap(arr[i++],arr[j--]);
		}
	}
	return pivotindex;
	
}
void quicksort(int arr[],int s,int e)
{
	if(s>=e)
	{
		return;
	}
	int p=partition(arr,s,e);
	
	//start->partition
	quicksort(arr,s,p);
	
	//partition -> end
	quicksort(arr,p+1,e);
	
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
	quicksort(arr,0,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
