// to get bit
/*#include<iostream>
using namespace std;
int getbit(int n,int pos)
{
	return ((n&(1<<pos))!=0);
}
int setbit(int n,int pos)
{
	return (n|(1<<pos));
}
int clearbit(int n,int pos)
{
	int mask=~(1<<pos);
	return (n&mask);
}
int updatebit(int n,int pos,int value)
{
	int mask=~(1<<pos);
	n=n&mask;
	return (n|(value<<pos));
}
int main()
{
	//cout<<getbit(5,2);
	//cout<<setbit(5,1);
	//cout<<clearbit(5,2);
	cout<<updatebit(5,1,1);
}*/

//XOR OPERATOR
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int XOR=0;
	for(int i=0;i<n;i++)
	{
		XOR=XOR ^ a[i];
	}
	cout<<XOR;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%4==0)
	{
		cout<<n;
	}
	if(n%4==1)
	{
		cout<<1<<endl;
	}
	if(n%4==2)
	{
		cout<<n+1<<endl;
	}
	if(n%4==3)
	{
		cout<<0<<endl;
	}
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n& 2)
		cout<< "even";
	else 
		cout<<"odd" ;
}*/


//clear last set bit
/*#include<iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int res=(n)&(n-1);
	cout<<res;	
}*/

//check if number is power of 2
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if((n&n-1)==0)
		cout<<"yes";
	else
		cout<<"no";
}
