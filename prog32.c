#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	int a=0,n,i;
	gets(c);
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i] == ' ')
		{
			a=a+1;
		}
	}
	printf("%d",a+1);
	return 0;
}
