#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,a,sum=0;
	cin>>n;
	
	vector<int>v;
	
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	
	long long i=0,j=n-1,count=0;
	
	while(1)
	{
		if(i==j)
		{
			count++;
			break;
		}
		
		int spaceLeft=4-v[j];
		
		if(v[i]<=spaceLeft)
		{
			v[j]+=v[i];
			i++;
		}
		else
		{
			j--;
			count++;
		}
		
	}
	cout<<count;
	return 0;
}
