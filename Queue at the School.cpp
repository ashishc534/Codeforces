#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	
	string arr;
	
	cin>>arr;
	
	while(t--)
	{
		for(int i=0;i<arr.size()-1;)
		{
			if(arr[i]=='B' && arr[i+1]=='G')
			{
				char a=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=a;
				
				i+=2;
			}
			else
			i++;
		}
	}
	cout<<arr;
}
