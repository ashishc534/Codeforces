#include<bits/stdc++.h>
using namespace std;

void abbreviation(string s)
{
	int n=s.size();
	
	char a=s[0],b=s[n-1];
	
	cout<<a<<n-2<<b;
}
int main()
{
	int n;
	string s;
	
	cin>>n;
	
	while(n--)
	{
		cin>>s;
		if(s.size()>10)
		abbreviation(s);
		
		else
		cout<<s;
		
		cout<<endl;
	}
	return 0;
}
