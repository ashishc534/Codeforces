#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	
	assert(n>=1 && n<=10 && k>=1 && k<=240);
	
	int time=0,totaltime=0,no_of_problems=0;
	
	for(int i=1;i<=n;)
	{
		time = 5*i;
		totaltime+=time;
		
		if((totaltime + k)<=240)
		{
			no_of_problems+=1;
			i+=1;
		}
		else
		break;
	}
	cout<<no_of_problems<<endl;
	return 0;
}
