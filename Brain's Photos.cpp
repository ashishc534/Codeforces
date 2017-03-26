#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	char color;
	int flag=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>color;
			
			if(color=='C' || color=='M' || color=='Y')
			flag=1;
		}
	}
	flag ? cout<<"#Color\n" : cout<<"#Black&White\n";
	
	return 0;
}
