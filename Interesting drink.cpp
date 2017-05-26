#include <bits/stdc++.h>
using namespace std;

int main() {
 int n,p,i,j,k,lo=0,q,t=0;
 long int q1;
 cin >> n;
 vector<int>a(n);
 for(i=0;i<n;i++)cin >>a[i];
 sort(a.begin(),a.end());
 cin >> q;
 for(i=0;i<q;i++){
  cin >>q1;
     k = upper_bound(a.begin(),a.end(),q1)-a.begin();
    cout<<k<<endl;
 }
 return 0;
}
