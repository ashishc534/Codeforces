#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,no_of_teams=0,l=0;
	cin>>n>>k;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if((arr[i]+k)<=5)
		l++;
		
		if(l==3){
		no_of_teams++;
		l=0;
		}
	}
	cout<<no_of_teams<<endl;
	return 0;
}
