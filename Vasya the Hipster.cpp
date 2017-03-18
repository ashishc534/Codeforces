#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	
	cin>>a>>b;
	
	int diff=0,same=0;
	
	if(a==b)
	cout<<(a+b)/2<<" "<<(a-b)<<endl;
	
	else{
		diff = min(a,b);
		same = abs(a-b)/2;
		
		cout<<diff<<" "<<same<<endl;
	}
	return 0;
}
