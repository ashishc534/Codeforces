#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,k=0;
	
	cin>>n>>t;
	
	int a[n-1];
	
	for(int i=1;i<n;i++)
	cin>>a[i];
	
	int i=1;
	while(1)
	{
		
		k=i+a[i];
		i=k;
		
		if(k==t)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		if(k>t)
		break;
	}
	cout<<"NO"<<endl;
	return 0;
}
