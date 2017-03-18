#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	
	long long count=0;
	
	int *arr1 = new int[26];
	int *arr2 = new int[26];
	
	memset(arr1,0,26);
	memset(arr2,0,26);
	
	for(long long i=0;i<a.size();i++)
	arr1[a[i]-'a']++;
	
	for(long long i=0;i<b.size();i++)
	arr2[b[i]-'a']++;
	
	for(int i=0;i<26;i++)
	count+=abs(arr1[i]-arr2[i]);
	
	count > 0 ? cout<<count : cout<<"-1";
	return 0;
}
