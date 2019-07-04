#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,c=0;
	char S[100];
	gets(S);
	n=strlen(S);
	for(i=0;i<n;i++)
	{
		if(S[i]!='0' && S[i]!='1')
		{
			c=c+1;
		}
	}
	if(c==0)
	    printf("yes");
	else
	    printf("no");
	return 0;	    
}
