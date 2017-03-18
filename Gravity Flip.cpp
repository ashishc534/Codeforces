#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	for(int i=n-1;i>=0;i--)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(arr[i] < arr[j])
			{
				int k = (arr[j]-arr[i]);
				arr[i]+=k;
				arr[j]-=k;
			}
		}
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
