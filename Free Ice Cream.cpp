#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,x;
	cin>>n>>x;
	
	char a;
	long long candies=0,distressed=0;
	
	while(n--)
	{
		cin>>a>>candies;
		if(a=='+')
		x+=candies;
		
		else if(a=='-')
		{
			if(candies<=x)
			x-=candies;
			
			else
			distressed++;
		}
	}
	cout<<x<<" "<<distressed<<endl;
	return 0;
}
