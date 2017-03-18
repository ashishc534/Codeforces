#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,sum=0;
	
	cin>>n;
	string a,b;
	
	cin>>a;
	cin>>b;
	
	for(int i=0;i<n;i++)
		sum+=min(10-abs(a[i]-b[i]),abs(a[i]-b[i]));
	
	cout<<sum<<endl;
	return 0;
}
