#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,first=0,second=0,third=0;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a;
		first+=a;
	}
	
	for(int i=0;i<n-1;i++)
	{
		cin>>a;
		second+=a;
	}
	
	for(int i=0;i<n-2;i++)
	{
		cin>>a;
		third+=a;
	}
	
	cout<<(first-second)<<endl<<(second-third)<<endl;
	
	return 0;
}
