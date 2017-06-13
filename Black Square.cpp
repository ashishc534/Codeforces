#include<bits/stdc++.h>
using namespace std;

void input()
{
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;

    int ans=0;

    string s;
    cin>>s;

    for(int i=0;s[i];i++)
    {
        switch(s[i])
        {
            case '1': ans+=a1;
                break;
            case '2': ans+=a2;
                break;
            case '3': ans+=a3;
                break;
            case '4': ans+=a4;
                break;

        }
    }
    cout<<ans;
}

int main()
{
    input();
}
