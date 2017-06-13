#include<bits/stdc++.h>
using namespace std;

void drawCrystal(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(abs (i-n/2) + abs(j-n/2) <= n/2)
            cout<<"D";

            else
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;

    drawCrystal(n);
    return 0;
}
