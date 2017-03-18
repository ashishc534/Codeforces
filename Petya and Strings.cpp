#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	
	cin>>a>>b;
	int sum1=0,sum2=0;
	
	int n=a.size();
	int m=b.size();
	for(int i=0;i<n;i++)
	{
		a[i]=tolower(a[i]);
		b[i]=tolower(b[i]);
	}
	
	if(a.compare(b)>0)
	cout<<"1";
	
	else if(a.compare(b)<0)
	cout<<"-1";
	
	else cout<<"0";
	
	return 0;
}
