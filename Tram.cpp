#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n],b[n];
	int s2=0,maxCapacity=INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		s2+=b[i];
		s2-=a[i];
		
		maxCapacity=max(maxCapacity,s2);
	}
	cout<<maxCapacity;
	return 0;
}
