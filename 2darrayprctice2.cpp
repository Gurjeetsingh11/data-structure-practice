//binary search in matrix
/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	int element;
	cin>>element;
	int s=0;
	int e=n*m-1;
	int mid=s+(e-s)/2;
	while(s<=e)
	{
		int matrix=a[mid/n][mid%n];
		if(matrix==element)
		{
			cout<<matrix<<endl;
		}
		if(matrix > element)
		{
			e=mid-1;
			cout<<e<<endl;
		}
		else
		{
			s=mid+1;
			cout<<s;
		}
		mid=s+(e-s)/2;
	}
	return 0;
}*/

//rotation of 2 d array

//anticlockwise

/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m/2;j++)
		{
			int temp=a[i][j];
			a[i][j]=a[i][m-j-1];
			a[i][m-j-1]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(i != j)
			{
				int temp=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
*/


//upper triange of matrix 
/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}	
	for(int i=0;i<n;i++)
	{		
		for(int j=0;j<m;j++)
		{
			if(i > j) // if(j>i)
			{
				cout<<" "<<" ";				
			}
			else
			{
				cout<<a[i][j]<<" ";
			}			
		}
		cout<<endl;		
	}
}*/

//right diagonal sum

/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{		
		for(int j=0;j<m;j++)
		{
		//right diagonal sum
		
		/*	if(i==j)
			{
				sum+=a[i][j];				
			}	
		*/
		//left diagonal sum
		
		/*	if(i+j==n-1)
			{
				sum+=a[i][j];
			}
		
		}
			
	}cout<<sum;
}
*/


//printing middle row and middle column

/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	//middle row 
	/*	for(int i=0;i<n;i++)
		{
			cout<<a[n/2][i]<<" ";
		}
	*/
	//middle column
/*		for(int j=0;j<m;j++)
		{
			cout<<a[j][m/2]<<" ";
		}

}*/


//maximum number of 1s in row 

/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int index=-1;
	int maxi=0;
	for(int i=0 ;i<n ;i++)
	{
		int count=0;
		
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==1)
		{
			count++;
		}
		if(count>maxi)
		{
			maxi=count;
			index=i;				
		}

		}		
	}
	cout<<maxi <<" "<<index;	
}*/

//square of element in matrix

/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			a[i][j]=pow(a[i][j],2);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}*/


//max and minimum in matrix
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	/*
	int maxnum=INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(maxnum<a[i][j])
				maxnum=a[i][j];
		}
		
	}cout<<"maximum number is :"<<maxnum;
	
	
	int minnum=INT_MAX;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]<minnum)
				minnum=a[i][j];
		}
	}
	cout<<"minimum number :"<<minnum<<endl;
	
}*/


//upper matrix sum
/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<m;j++)
		{
			
			//upper triangle sum
		/*	if(i <= j )
			{
				sum+=a[i][j];
			}	
		
		//lower triangle sum
		if(i >= j )
		{
			sum+=a[i][j];
		}

	}
}cout<<sum;

}*/
