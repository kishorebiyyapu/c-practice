#include<stdio.h>
int main()
{
	int b[100],i,s;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<=9;i++)
	{
		if(b[0]>b[i])
		{
			s=b[0];
			b[0]=b[1];
			b[1]=s;
		}
	}
	printf("%d",b[0]);
	return 0;
}
