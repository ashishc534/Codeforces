#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int arr[n],total=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		total+=arr[i];
	}
	int taken=0;
	int cnt=0;
	
	sort(arr,arr+n);
	
	for(int i=n-1;i>=0;i--)
	{
		taken+=arr[i];
		
		if(taken *2 > total)
		{
			cnt=n-i;
			break;
		}	
	}
	cout<<cnt<<endl;
	
	return EXIT_SUCCESS;
}
