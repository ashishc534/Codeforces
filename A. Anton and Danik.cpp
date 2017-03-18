#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	long long n,a=0,b=0;
	cin>>n;
	
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='A')
		a++;
		
		else
		b++;
	}
	if(a>b)
	cout<<"Anton"<<endl;
	
	else if(b>a)
	cout<<"Danik"<<endl;
	
	else
	cout<<"Friendship"<<endl;
	
	return 0;
}
