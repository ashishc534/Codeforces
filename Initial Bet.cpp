#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    int sum=0;
    int arr[5];
    
    for(int i=0;i<5;i++)
    {
    	cin>>arr[i];
    	sum+=arr[i];
	}
	
	if(sum % 5==0 && sum/5 >= 1)
	cout<<sum/5;
	
	else
	cout<<"-1";
	
    return 0;
}
