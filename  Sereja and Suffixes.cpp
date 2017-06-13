#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;

vector<int>numbers(n);
for(auto &i : numbers)
cin>>i;

set<unsigned int>distinct;
vector<unsigned int>count(n);

for(int i=n;i>=1;i--)
{
distinct.insert(numbers[i-1]);
count[i-1]=distinct.size();
}

for(int i=0;i<m;i++)
{
int from;
cin>>from;

cout<<count[from-1]<<endl;
}
return 0;
}
