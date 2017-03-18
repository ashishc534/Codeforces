#include<bits/stdc++.h>
using namespace std;

int main()
{
	string guest,host,pile;
	
	cin>>guest>>host>>pile;
	
	int g[26],h[26],p[26],GnH[26];
	
	memset(g,0,sizeof(g));
	memset(h,0,sizeof(h));
	memset(p,0,sizeof(p));
	memset(GnH,0,sizeof(GnH));
	
	
	for(int i=0;i<guest.size();i++)
	g[guest[i]-'A']++;
	
	for(int i=0;i<host.size();i++)
	h[host[i]-'A']++;
	
	for(int i=0;i<pile.size();i++)
	p[pile[i]-'A']++;
	
	for(int i=0;i<26;i++)
	GnH[i]+=g[i]+h[i];
	
	for(int i=0;i<26;i++)
	GnH[i]-=p[i];
	
	for(int i=0;i<26;i++)
	{
		if(GnH[i]<0 || GnH[i]>0)
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}
