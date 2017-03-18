#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[3]={0};
	
	cin>>a[0]>>a[1]>>a[2];
	
	sort(a,a+3);
	
	int min1 = max(a[1],a[2]);
	
	int point = min(max(a[0],a[1]),min1);
	
	int totalDistance = (abs(a[0]-point)+abs(a[1]-point)+abs(a[2]-point));
	
	cout<<totalDistance<<endl;
	
	return 0;
}
