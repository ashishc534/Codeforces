#include<bits/stdc++.h>
using namespace std;

void CapsLock(string s)
{
	int n=s.size();
	
	for(int i=0;i<n;i++)
	{
		if(isupper(s[i]) && i==0)
		s[i]=s[i];
		
		if(islower(s[i]) && i==0)
		s[i]=toupper(s[i]);
		
		if(isupper(s[i]) && i!=0)
		s[i]=tolower(s[i]);
	}
	cout<<s;
}

int checkIsupper(string s)
{
	int flag=0;
	for(int i=0;i<s.size();i++)
	{
		if(isupper(s[i]))
		continue;
		
		else
		{
			flag=1;
			break;
		}
	}
	
	return (flag==0? 1:0);
}
int checkIslower(string s)
{
	int flag=0;
	for(int i=0;i<s.size();i++)
	{
		if(islower(s[i]))
		continue;
		
		else
		{
			flag=1;
			break;
		}
	}
	
	return (flag==0? 1:0);
}

void convertToLower(string s)
{
	
	for(int i=0;i<s.size();i++)
	s[i]=tolower(s[i]);
	
	cout<<s;
}

void convertToUpper(string s)
{
	for(int i=0;i<s.size();i++)
	s[i]=toupper(s[i]);
	
	cout<<s;
}

int main()
{
	string s;
	
	cin>>s;
	
	int n=s.size();
	
	if(n==1 && islower(s[0]))
	{
		s[0]=toupper(s[0]);
		cout<<s;
	}
	else
	{
	int a = checkIsupper(s);
	int b = checkIslower(s);
	
	if(!a && !b)
	CapsLock(s);
	
	else if(a && !b)
	convertToLower(s);
	
	else if(!a && b)
	cout<<s;
	}
	return 0;
}
