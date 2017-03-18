#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,p,c=0,rem=0;
	
	cin>>n>>p;
	
	while(n>0)
	{
		c+=n;
		rem+=n%p;
		n=n/p;
		
		
		if(rem>=p)
		{
			n+=1;
			rem-=p;
		}
	}
	cout<<c;
	
	return 0;
}
