#include<stdio.h>
int main()
{
	int a[100],i,s;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=9;i++)
	{
		if(a[0]>a[i])
		{
			s=a[0];
			a[0]=a[1];
			a[1]=s;
		}
	}
	printf("%d",a[0]);
	return 0;
}
