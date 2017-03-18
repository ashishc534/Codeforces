#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,flag=0;
	
	cin>>n>>m;
	int i=0;
	while(i<n)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"#";
		}
		i++;
		cout<<endl;
		if(!flag && i<n)
		{
			for(int k=0;k<m-1;k++)
			cout<<".";
			
			cout<<"#";
			cout<<endl;
		}
		if(flag && i<n)
		{
			cout<<"#";
			for(int k=1;k<m;k++)
			cout<<".";
			cout<<endl;
			
		}
		i++;
		flag=!flag;
	}
	return 0;
}
