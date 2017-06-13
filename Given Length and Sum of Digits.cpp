#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;
	
	string s;
	string zero="0";
	int maxVal = 0;
	
	int res=0;
	while(d--)
	{
		cin>>s;
		size_t found = s.find("0");
		
		if(found!=string::npos)
		{
			res+=1;
			maxVal = max(maxVal,res);
		}
		else
		res=0;
	}
	cout<<maxVal<<endl;
	return 0;
}
