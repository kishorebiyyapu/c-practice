#include<stdio.h>
#include<string.h>
int main()
{
	char S[100];
	int i,c=0;
	gets(S);
	for(i=0;i<=strlen(S);i++)
	{
		if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u')
		{
			c=c+1;
		}
	}
	if(c>=1)
	   printf("yes");
	else
	printf("no");   
}
