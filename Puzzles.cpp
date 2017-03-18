#include<bits/stdc++.h>
using namespace std;

int findLeast(int arr[],int start,int end)
{
	int minValue=INT_MAX,maxValue=INT_MIN;
	for(int i=start;i<end;i++)
	{
		minValue=min(minValue,arr[i]);
		maxValue=max(maxValue,arr[i]);
	}
	return (abs(maxValue-minValue));
}
int main()
{
	int n,m;
	cin>>m>>n;
	
	int minValue=INT_MAX;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	
	int i=0;
	
	while(i<=n-m)
	{
		minValue = min(minValue,findLeast(arr,i,(m+i)));
		i++;
	}
	cout<<minValue<<endl;
	return 0;
}
