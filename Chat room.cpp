#include<bits/stdc++.h>
using namespace std;

bool isHello(string s)
{
    string word="hello";
    
    int a=0;
    int i, count = 0;
    
    for(i=0; i<s.size(); i++){
        
		if(s[i]==word[a]){
            a++;
            count++;
        }
    }
    
	if(count==5)
    return true;
    else
    return false;

}

int main()
{
	string s;
	cin>>s;
	
	isHello(s)? cout<<"YES\n" : cout<<"NO\n";
	
	return 0;
}
