#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	int a=0,n,i,b=0,e=0,d;
	gets(c);
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]>='0' && c[i]<='9')
		{
			a=a+1;
		}
		else if(c[i]>='a' && c[i]<='z')
		{
			b=b+1;
		}
		else if(c[i]>='A' && c[i]<='Z')
		{
			e=e+1;
		}
	
	}
	d=n-(a+b+e);
	printf("%d",d);
	return 0;
}
