//taking input and printing output in 2d array

//ROW WISE

/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	//taking input 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}	
	//printing output
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}*/

//COLUMN WISE

/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	//taking input 
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[j][i];	
		}	
	}	
	//printing output
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}*/

//hardcore

/*#include<iostream>
using namespace std;
int main()
{
	int a[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}*/


//find/search the element in 2d array

/*#include<iostream>
using namespace std;

bool ispresent(int a[][4],int key,int n,int m)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(a[i][j] == key)
			{
				return 1;
			}	
		}	
	}
	return 0;
}
int main()
{
	int a[3][4];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>a[i][j];	
		}	
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j]<<" ";	
		}
		cout<<endl;	
	}
	int key;
	cout<<"enter the element to be searched :"<<endl;
	cin>>key;
	if(ispresent(a,key,3,4))
		cout<<"found"<<endl;
	else
		cout<<"not found "<<endl;
}*/


//ROW WISE SUM & COLUMN WISE SUM
/*#include<iostream>
using namespace std;

int rowwisesum(int a[][4],int row,int col)
{
	for(int i=0;i<3;i++)
	{
		int rowsum=0;
		for(int j=0;j<4;j++)
		{
			rowsum+=a[i][j];	
		}
		cout<<rowsum<<" ";	
	}
	return 0;
}
int colwisesum(int a[][4],int row,int col)
{
	for(int i=0;i<4;i++)
	{
		int rowsum=0;
		for(int j=0;j<3;j++)
		{
			rowsum+=a[j][i];	
		}
		cout<<rowsum<<" ";	
	}
	return 0;
}
int main()
{
	int a[3][4];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>a[i][j];	
		}	
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j]<<" ";	
		}
		cout<<endl;	
	}
	colwisesum(a,4,3);
}*/


//sum of all element in the array

/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum+=a[i][j];
		}
		
	}cout<<sum;
}*/


// ROW with maximum sum

/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	int maxindex=INT_MIN;
	int rowindex=-1;	
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<m;j++)
		{
			sum+=a[i][j];
		}
		if(sum>maxindex)
		maxindex=sum;
		rowindex=n;
	
	}				
	cout<<"the maximum of row is : "<<maxindex<<" at index :"<<rowindex;	
}*/

//print like wave

/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;j++)
		{
			cin>>a[i][j];
		}
	}	
	
	for(int j=0;j<m;j++)
	{
		if(m&1)
		{
			for(int i=n-1;i>=0;i--)
			{
				cout<<a[i][j]<<" ";
			}
		}
		else
		{
			for(int i=0;i<n;i++)
			{
					cout<<a[i][j]<<" ";
			}
		}
	}
} */


//spiral matrix
#include<iostream>
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
	
	//spiral matrix
	int top=0;
	int right=m-1;
	int left=0;
	int bottom=n-1;
	
	while(top <= bottom && left <= right)
	{
		for(int i=left;i<=right;i++)
		{
			cout<<a[top][i]<<" ";
			
		}top++;
		for(int i=top;i<=bottom;i++)
		{
			cout<<a[i][right]<<" ";			
		}right--;
			
		if(left <= right)
		{
			for(int i=right;i>=left;i--)
			{
				cout<<a[bottom][i]<<" ";
			}bottom--;
		}
		if(top <= bottom)
		{
			for(int i=bottom;i>=top;i--)
			{
				cout<<a[i][left]<<" ";
			}left++;
		}
	}
}
