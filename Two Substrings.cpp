#include<bits/stdc++.h>
using namespace std;

int main()
{
	char s[100000],*p;
	cin>>s;
	
	if((p=strstr(s,"AB")) && strstr(p+2,"BA"))
	cout<<"YES\n";
	
	else if((p=strstr(s,"BA")) && strstr(p+2,"AB"))
	cout<<"YES\n";
	
	else
	cout<<"NO\n";
	return 0;
}
