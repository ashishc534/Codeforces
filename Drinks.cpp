#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	assert(n>=1 && n<=100);
	
	int arr[n];
	
	int taken=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		taken+=arr[i];
	}
	
	cout<<fixed<<setprecision(12)<<(double)(taken)/n<<endl;
	return 0;
}
