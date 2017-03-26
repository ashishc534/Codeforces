#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int person=0,count=0,t;
	
	while(n--)
	{
		cin>>t;
		
		if(t==-1)
		{
			if(person>0)
			person--;
			
			else
			count++;
		}
		else
		person+=t;
	}
	cout<<count<<endl;
	return 0;
	
}
