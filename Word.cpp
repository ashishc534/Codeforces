#include<bits/stdc++.h>
using namespace std;

void tolow(string s)
{
	for(int i=0;i<s.size();i++)
	{
		s[i]=tolower(s[i]);
		cout<<s[i];
	}
}

void toup(string s)
{
	for(int i=0;i<s.size();i++)
	{
		s[i]=toupper(s[i]);
		cout<<s[i];
	}
}
int main()
{
	string s;
	cin>>s;
	
	int upCase=0,lowCase=0;
	
	for(int i=0;i<s.size();i++)
	islower(s[i]) ? lowCase+=1 : upCase+=1;
	
	lowCase >= upCase ? tolow(s) : toup(s);
	return 0;
}
