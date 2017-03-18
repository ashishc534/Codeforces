#include<bits/stdc++.h>
using namespace std;

void Pangram(char *s,int count[])
{
	int n = strlen(s);
	bool flag=false;
	
	for(int i=0;i<n;i++)
	{
		s[i]=tolower(s[i]);
		count[s[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(count[i]==0)
		{
			flag=true;
			break;	
		}
	}
	if(flag)
	cout<<"NO";
	
	else
	cout<<"YES";
}
	

int main()
{
	int n;
	cin>>n;
	char s[n];
	cin>>s;
	int count[26];
	
	for(int i=0;i<26;i++)
	count[i]=0;
	Pangram(s,count);
	return 0;
}
