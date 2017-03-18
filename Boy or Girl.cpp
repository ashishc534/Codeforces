#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int count=0;
	char cnt[26]={0};
	
	for(int i=0;i<s.size();i++)
	cnt[s[i]-'a']++;
	
	for(int i=0;i<26;i++)
	{
		if(cnt[i]>=1)
		count++;
	}
	if(count%2==0)
	cout<<"CHAT WITH HER!"<<endl;
	
	else
	cout<<"IGNORE HIM!";
	
	return 0;
}
