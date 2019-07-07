#include<stdio.h>
#include<string.h>
int main()
{
	char S[100];
	int n,i,m;
	gets(S);
	n=strlen(S);
	if(n%2==0)
	{
		m=n/2;
		S[m]='*';
		S[m-1]='*';
	}
	else
	{
		m=n/2;
		S[m]='*';
	}
	puts(S);
}
