#include<bits/stdc++.h>
using namespace std;

bool isoperator(char a)
{
	return (a=='+');
}
int main()
{
	char s[100];
	
	cin>>s;
	
	vector<char>op,v;
	
	int n=strlen(s);
	
	sort(s,s+n);
	
	int i;
	for(int i=0;i<n;)
	{
		if(isoperator(s[i]))
		{
			op.push_back(s[i]);
			i++;
		}
		else
		{
			v.push_back(s[i]);
			i++;
		}
	}
	int s1=v.size();
	int s2=op.size();
	
	int k=0;
	
	for(int i=1,k=0;k<s2;k++)
	{
		v.insert(v.begin()+i,op[k]);
		i+=2;
	}
	
	for(int i=0;i<n;i++)
	cout<<v[i];
	return 0;
}
