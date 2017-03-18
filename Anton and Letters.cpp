#include<bits/stdc++.h>
using namespace std;

int distinct(char *s)
{
	int n=strlen(s)-1,c=0;
	
	int count[26]={0};
	
	for(int i=1;i<n;i++)
	{
		count[s[i]-'a']++;	
	}
	for(int i=0;i<26;i++)
	{
		if(count[i]>0)
		c+=1;
	}
	return c;
}
int main()
{
	char s[1000];
	
	cin.getline(s,999);
	
	cout<<distinct(s)<<endl;
	
	return 0;
}
