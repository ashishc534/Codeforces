#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	vector<long long>v;
	
	cin>>n;
	
	while(n--)
	{
		long long k;
		cin>>k;
		v.push_back(k);
	}
	
	vector<long long>::iterator it;
	it=max_element(v.begin(),v.end());
	
	cout<<count(v.begin(),v.end(),*it)<<endl;
	return 0;
}
