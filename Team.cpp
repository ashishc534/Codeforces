#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	cin>>n;
	
	int res=0;
	int arr[3];
	while(n--)
	{
		int count=0;
			
		for(int i=0;i<3;i++)
		{
			cin>>arr[i];
			if(arr[i]==1)
			count++;
		}
		
			if(count>=2)
			res+=1;
	}
	cout<<res;
	return 0;
}
