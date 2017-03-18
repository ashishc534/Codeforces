#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[200],b[200];
	gets(a);
	int k=0,j=0;
	
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B'){
		i+=2;
		k=1;
	}

	else
	{
		if(k==1 && j>0)
		{
		b[j]=' ';
		j++;
		}
		
		b[j]=a[i];
		k=2;
		j++;
	}
	}
b[j]='\0';
puts(b);
return 0;
}

