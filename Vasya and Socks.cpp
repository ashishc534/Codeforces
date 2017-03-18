#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,c=0,i;
	
	cin>>n>>m;
	
	for(i=1;n>0;n--,i++)
	{
		if(i%m==0)
		n+=1;
	}
	cout<<i-1;
	return 0;
}
