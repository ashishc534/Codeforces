#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin>>n;
	
	n%2==0 ? cout<<n/2 : cout<<-1*(n+1)/2;
	
	return 0;
}
