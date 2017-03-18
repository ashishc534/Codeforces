#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b)
{
	if(b==0)
	return a;
	
	else if(a==0)
	return b;
	
	else if(a%b==0)
	return b;
	
	else if(b%a==0)
	return a;
	
	else
	return 1;
}
int whoWins(int a,int b,int n)
{
	int simon=a,antisimon=b;

	while(1)
	{
		simon=GCD(a,n);
		n-=simon;
		
		if(n<0)
		return 1;
		
		
		antisimon=GCD(b,n);
		n-=antisimon;
		
		if(n<0)
		return 0;
	}
}
int main()
{
	int a,b,n;
	cin>>a>>b>>n;
	
	cout<<whoWins(a,b,n);
	
	return 0;
}
