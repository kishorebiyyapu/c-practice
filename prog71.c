#include<stdio.h>
#include<string.h>
int main()
{
	char S[100],a[100];
	int i;
	gets(S);
	for(i=0;S[i]!='\0';i++)
	{
		a[i]=S[i];
	}
	strrev(a);
	if(strcmp(a,S)==0)
	{
		printf("yes");
	}
	else 
	   printf("no");
	return 0;
}
