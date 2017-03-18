#include<bits/stdc++.h>
using namespace std;

void print(vector<int>v,int n)
{
	reverse(v.begin(),v.end());
	if(v[0]!=0)
	cout<<"-";
	
	for(int i=0;i<n-1;i++)
	cout<<v[i];
}
long long getProfit(long long num)
{
	vector<int>v1,v2;
	num = abs(num);
	while(num > 0)
	{
		int rem =num % 10;
		v1.push_back(rem);
		num/=10;
	}
	
	for(int i=0;i<v1.size();i++)
	v2.push_back(v1[i]);
	
	long long n = v1.size();
	
	v1.erase(v1.begin());
	v2.erase(v2.begin()+1);
	
	long long s1=0,s2=0;
	
	for(int i=0;i<v1.size();i++)
	s1+=v1[i];
	
	for(int i=0;i<v2.size();i++)
	s2+=v2[i];
	
	s1 <= s2 ? print(v1,n):print(v2,n); 
	
}
int main()
{
	long long num;
	cin>>num;
	
	if(num < 0)
	getProfit(num);
	
	else
	cout<<num<<endl;
	
	return 0;
}
