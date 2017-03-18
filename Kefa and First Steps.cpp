#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,count=1,maxCount=1;
	cin>>n;
	
	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(i>0)
		{
			if(arr[i]>=arr[i-1])
			{
				count++;
				maxCount=max(maxCount,count);
			}
			else
			count=1;
		}
	}
	cout<<maxCount<<endl;
	return 0;
}
