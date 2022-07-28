/*#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
/*	string s1="famjam";
	string s2="ilyily";
	for(int i=0;i<s1.length();i++)
	{
		cout<<s1[i]<<endl;
	}
*/

/*	string s1="famjam";
	string s=s1.substr(2,4);
	cout<<s<<endl;
*/

/*	string s1="famjam";
	string s=s1.insert(3,"sam");
	cout<<s;
*/
/*	string s1="apsbrqt";
	sort(s1.begin(),s1.end());
	cout<<s1;
*/

/*	string s1="prwiwi";
	reverse(s1.begin(),s1.end());
	cout<<s1;
	
}*/

//reverse a string 
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=s.length()-1;i>=0;i--)
	{
		cout<<s[i];
	}	
}*/

//change every letter in givem string with letter folloing it in alphabet
/*#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int charcode;
	for(int i=0;i<s.length();i++)
	{
		charcode=int(s[i]);
		if(charcode == 120)
		{
			s[i]=char(97);
		}
		else if(charcode==90)
		{
			s[i]=char(65);
		}
		else if(charcode >= 65 && charcode<=90 || charcode>=97 && charcode<=122)
		{
			s[i]=char(charcode+1);
		}
		
	}cout<<s;
}*/

//capitalize the first letter 
/*#include<iostream>
using namespace std;
int main()
{
	string s
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(i==0)
		{
			s[i]=toupper(s[i]);
		}
		else if(s[i-1]==' ')
		{
			s[i]=toupper(s[i]);
		}
	}
	cout<<s;
}*/

//number of vowel in given string 
/*
#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' ||s[i]=='u')
			count++;
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' ||s[i]=='U')
			count++;
	}
	cout<<count;
}
*/

//number of vowel in given string

/*#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' ||s[i]=='u')
			count++;
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' ||s[i]=='U')
			count++;
	}
	cout<<count;
}*/

//count number of words in the given string
/*#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]== ' ')
			count++;
	}
	return count+1;
}*/

//check if given character are equally present in string
/*#include<iostream>
using namespace std;
int main()
{
	string char1,char2;
	string s;	
	cin>>s;
	cin>>char1>>char2;
	int count1=0;
	int count2=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==char1[0])
			count1++;
		if(s[i]==char2[0])
			count2++;
	}
	if(count1==count2)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
}
*/

//palindrome
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string v=s;
	reverse(s.begin(),s.end());
	if(s==v)
		cout<<"palindrome";
	else
		cout<<"not";
}*/

//palindrome
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int flag=0;
	for(int i=0;i<s.length()/2;i++)
	{
		if(s[i] == s[s.length()-i-1])
		{
			flag=1;
			break;
		}

	}
	if(flag)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not palindrome";
	}
}*/

/*
//ANAGRAM

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s1="sksfhs";
	string s2="listen";
	
	int n1=s1.length();
	int n2=s2.length();
	
	if(n1 != n2)
		return false;
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	for(int i=0;i<n1;i++)
	{
		if(s1[i]!=s2[i])
			cout<<"not";
		
	
	}cout<<"yes"<<endl;
}*/

//delete vowel from the string

/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	char str[100];
	cin>>str;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E'||str[i]=='I'|| str[i]=='O'||str[i]=='U')
		{
			str[i]=' ';
		}
	}
	cout<<str;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	bool flag=true;
	if(s1.length()!=s2.length())
		flag=false;
	else
		for(int i=0;i<s1.length();i++)
		{
			if(s1[i] != s2[i])
				flag=0;
				break;
		}
		cout<<flag;
}*/

//lexicographical order

/*#include<iostream>
using namespace std;
int main()
{
	string s[5],temp;
	for(int i=0;i<5;i++)
	{
		getline(cin,s[i]);
	}
	for(int i=0;i<4;i++)
		for(int j=i+1;j<5;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
		for(int i=0;i<5;i++)
		{
			cout<<s[i]<<endl;
		}
}*/

//upper case
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[20];
    cin>>str;
    for(int i=0; i<=strlen(str); i++)
    {
            if(str[i]>=65 && str[i]<=90) 
            {
                    str[i]=str[i]+32;
            }
    }
    cout<<str;
    return 0;
}
