#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	cin>>n;

	int x=0;
	
	while(n--)
	{
		string s;
		cin>>s;
		
		if(s=="X++" || s=="++X")
		x+=1;
		
		if(s=="X--" || s=="--X")
		x-=1;
		
	}
	cout<<x;
	return 0;
}
