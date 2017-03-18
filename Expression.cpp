#include<bits/stdc++.h>
using namespace std;

int res1(int a,int b,int c)
{
	return a+b*c;
}
int res2(int a,int b,int c)
{
	return a*(b+c);
}
int res3(int a,int b,int c)
{
	return (a*b*c);
}
int res4(int a,int b,int c)
{
	return ((a+b)*c);
}
int res5(int a,int b,int c)
{
	return a+b+c;
}

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	
	int d = res1(a,b,c);
	int e = res2(a,b,c);
	int f = res3(a,b,c);
	int g = res4(a,b,c);
	int h = res5(a,b,c);
	int arr[5]={d,e,f,g,h};
	
	int maxres=INT_MIN;
	
	for(int i=0;i<5;i++)
	maxres=max(maxres,arr[i]);
	
	cout<<maxres<<endl;
	
	return 0;
}
