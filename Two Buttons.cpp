#include<bits/stdc++.h>
using namespace std;

vector<int>ver;
bool discovered[10001];
vector<int>dis(10001);

queue<int>q;

void bfs(int n,int m)
{
	dis[n]=0;
	discovered[n]=true;
	q.push(n);
	
	while(!q.empty())
	{
		int top = q.front();
		q.pop();
		
		if(discovered[2*top]==false && top*2<=10000)
		{
			discovered[2*top]=true;
			dis[2*top]=dis[top]+1;
			
			if(2*top==m)
			return;
			
			else
			q.push(2*top);
		}
		if(discovered[top-1]==false && top-1>0)
		{
			discovered[top-1]=true;
			dis[top-1]=dis[top]+1;
			
			if(top-1==m)
			return;
			
			else q.push(top-1);
			
		}
	}
}
int main()
{
	
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		ver.push_back(i);
		dis[i]=INT_MAX;
		discovered[i]=false;
	}
	
	if(m<n)
	{
		cout<<n-m<<" ";
		return 0;
	}
	
	bfs(n,m);
	cout<<dis[m]<<" ";
	return 0;
}
