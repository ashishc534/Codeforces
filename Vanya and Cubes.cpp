#include<bits/stdc++.h>
using namespace std;

int level(int a)
{
	int s=0;
	for(int i=1;i<=a;i++)
	s+=i;
	
	return s;
}
int main()
{
	int n;
	cin>>n;
	
	int h=-1;
	int k=0,i=0;
	
	while(k<=n)
	{
		i+=1;
		k+=level(i);
		h+=1;
	}
	cout<<h;
	return 0;
}
