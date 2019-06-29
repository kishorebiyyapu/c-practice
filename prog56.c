#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,d=0,e=0;
	char s[100];
	gets(s);
	n=strlen(s);
	for(i=1;i<n;i++)
	{
		if(s[i]>='a' && s[i]<='z')
		   d=d+1;
		else if(s[i]>='0' && s[i]<='9')
		    e=e+1;
	}
	if(e>0 && d>0)
	     printf("Yes");
	else
	    printf("No");
	return 0;	    
}
