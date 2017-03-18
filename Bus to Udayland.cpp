#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,flag=0,f=0;
	int c=0;
	string v;
	cin>>n;
	
	while(n--)
	{
		string s;
		
		cin>>s;
		
		if(!flag)
		{
		if(s[0]=='O' && s[1]=='O')
		{
			s[0]=s[1]='+';
			flag=1;
		}
		else if(s[3]=='O' && s[4]=='O')
		{
			s[3]=s[4]='+';
			flag=1;
		}
		for(int i=0;i<s.size();i++)
		v.push_back(s[i]);
		c++;
		}
	
	else
		{
			for(int i=0;i<s.size();i++)
			v.push_back(s[i]);
		}
	}
	if(flag)
	{
	cout<<"YES\n";
	for(int i=0;i<v.size();i++)
	{
		if(i>0 && i%5==0)
		cout<<endl;	
		cout<<v[i];
		
	}
	}
	else
	cout<<"NO\n";
	return 0;
}
