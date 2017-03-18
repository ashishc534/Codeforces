#include<bits/stdc++.h>
using namespace std;

int main()
{
	long n;
	long a;
	vector<int>v;
	cin>>n;
	
	long c=1;
	
	while(n--)
	{
		cin>>a;
		v.push_back(a);
	}
	
	for(int i=0;i<v.size()-1;i++)
	{
		if(v[i]!=v[i+1])
		c++;
	}
	cout<<c<<endl;
	return 0;
}
