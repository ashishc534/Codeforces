#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numFriends;
	cin>>numFriends;
    
	int *perm = new int[numFriends + 1];
    
	int temp = 0;
    
	for(int i = 1; i <= numFriends; i++)
	{
	cin>>temp;
	perm[temp] = i;
	}
    
	for(int i = 1; i <= numFriends; i++)
	cout<<perm[i]<<" ";
	
    
	printf("\n");
    return 0;
}
