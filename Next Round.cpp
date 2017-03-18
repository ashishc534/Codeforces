#include <bits/stdc++.h>
using namespace std;

int main()
{
  int participants[55];
  int n,k,max;
  
  cin>>n>>k;
  
  for (int i = 0; i < n; ++i)
  {
    cin>>participants[i];
    
  }
  
  int count=0;
  for (int i = 0; i < n; ++i)
  {
    if(participants[i]>=participants[k-1] && participants[i] > 0)
      count++;
  }
  cout<<count;

 return 0;  
}
