#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long unsigned int k,n,w,totalCost=0;
	
	cin>>k>>n>>w;
	
	for(long long i=1;i<=w;i++)
	totalCost+= k*i;
	
	long long borrowMoney=0;
	borrowMoney = totalCost-n;
	
	if(borrowMoney <=0)
	cout<<"0"<<endl;
	
	else
	cout<<borrowMoney<<endl;
	
	return 0;
}
