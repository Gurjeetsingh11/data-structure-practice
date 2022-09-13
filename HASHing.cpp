//unordered set

/*#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main()
{
	unordered_set<int>s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.insert(40);
	
	for(auto it=s.begin();it!=s.end();it++)
	{
		cout<<(*it)<<" "<<endl;
	}
	cout<<"size is :"<<s.size()<<endl;
	
	/*s.clear();
	cout<<"size is :"<<s.size()<<endl;
	
	int key=10;
	if(s.find(key)==s.end())
	{
		cout<<"not found";
	}
	else
	{
		cout<<" found"<<endl;
	}
	
	if(s.find(key)==s.end())
	{
		cout<<"not found";
	}
	else
	{
		auto temp=s.find(key);
		s.erase(key);
	}
	cout<<"size is :"<<s.size()<<endl;
	
	if(s.count(10))
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
}
*/


//Unorderd map
/*#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
	unordered_map<string,int>umap;
	umap["ABC"]=23;
	umap["bgh"]=21;
	umap["ghg"]=54;
	
	/*for(auto it:umap)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}
	
	for(auto it=umap.begin();it!=umap.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	
	string key="ABC";
	if(umap.find(key) != umap.end())
	{
		auto temp=umap.find(key);
		cout<<"key is :"<<temp->first<<endl;
		cout<<"value is :"<<temp->second<<endl;	
	}
	else
	{
		cout<<"not found";
	}
	
	umap.insert(make_pair("mobile",5000));
	for(auto it:umap)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}
	
	int ar[]={1,2,3,1,4,3,2,4,3,5,6,7};
	unordered_map<int,int>p;
	for(int i=0;i<15;i++)
	{
		int key=ar[i];
		p[key]++;
	}
	for(auto it=p.begin();it!=p.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
}*/


#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	unordered_map<string,int>m;
	pair<string,int>p=make_pair("gurjeet",1);
	m.insert(p);
	pair<string,int>p2("shaam",2);
	cout<<m.at("gurjeet")<<endl;;
	cout<<m["gurjeet"]<<endl;
	//entry will be creted
	cout<<m["popo"]<<endl;
	cout<<m.at("popo")<<endl;
	
	cout<<m.size()<<endl;
	cout<<m.count("gurjeet")<<endl;
	cout<<m.count("gogo")<<endl;
	
	m["guru"]=25;
	m["suru"]=34;
	
	for(auto i:m)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	
	for(auto it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
}

