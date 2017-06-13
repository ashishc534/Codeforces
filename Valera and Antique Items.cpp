#include<bits/stdc++.h>
using namespace std;

int main()
{
	long n,v,k,price,count=0,res=0;
	vector<long>vec;
	
	cin>>n>>v;
	for(int j=1;j<=n;j++)
	{
		count=0;
		cin>>k;
		for(int i=1;i<=k;i++)
		{
			cin>>price;
			if(price < v)
			{
				count=1;
			}
			else
			continue;
			
		}
		if(count)
		vec.push_back(j);
		
		res+=count;
	}
	
	if(res)
	{
		cout<<res<<endl;
		
		for(int i=0;i<vec.size();i++)
		cout<<vec[i]<<" ";
	}
	
	else
	cout<<"0\n"<<endl;
	
	return 0;
}
