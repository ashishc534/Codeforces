#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	
	cin>>n;
	
	vector<int>levels;
	set<int>numbers;
	int p,q,a;
	cin>>p;
	
	
	for(int i=0;i<p;i++)
	{
		cin>>a;
		levels.push_back(a);
	}
	
	cin>>q;
	
	
	for(int i=0;i<q;i++)
	{
		cin>>a;
		levels.push_back(a);
	}
	
	vector<int>::iterator it;
	
	for(it=levels.begin();it!=levels.end();it++)
	{
		if(numbers.find(*it)==numbers.end())
		numbers.insert(*it);
	}
	
	bool ctr=true;
	
	for(int i=1;i<=n;i++)
	{
	if(numbers.find(i)==numbers.end())
	ctr=false;
	
	}
	ctr==true? cout<<"I become the guy." : cout<<"Oh, my keyboard!";
	
}
