#include<bits/stdc++.h>
using namespace std;

int lookup[100];

void initialize()
{
	for(int i=0;i<100;i++)
	lookup[i]=-1;
}

int fib(int n)
{
	if(!lookup[n])
	{
		if(n<=1)
		lookup[n]=n;
		
		else
		lookup[n]=fib(n-1)+fib(n-2);
	}
	return lookup[n];
}

int main()
{
	int n=14;
	
	cout<<fib(n);
}
