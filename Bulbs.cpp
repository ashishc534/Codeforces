#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		while(k--)
		{
			int a;
			cin>>a;
			v.push_back(a);
		}
	}
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	
	if(v.size()==m)
	cout<<"YES\n";
	
	else
	cout<<"NO\n";
	
	return 0;
}
