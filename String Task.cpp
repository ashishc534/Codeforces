#include<bits/stdc++.h>
using namespace std;

int isVowel(char a)
{
	return (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='y');
}
void modify(string s)
{
	int n=s.size();
	
	char arr[1000];
	int k=0;
	
	for(int i=0;i<n;)
	{
		if(!isVowel(tolower(s[i])))
		{
			arr[k]='.';
			k++;
			arr[k]=tolower(s[i]);
			k++;
			
			i++;
		}
		
		else i++;
	}
	
	for(int i=0;i<k;i++)
	cout<<arr[i];
}
int main()
{
	string s;
	cin>>s;
	
	modify(s);
	
	return 0;
}
