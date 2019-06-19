#include<stdio.h>
#include<math.h>
int main()
{
	int a[100],temp,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=a[1];
	for(i=2;i<=n;i++)
	{
		if(a[i]>temp)
		     temp=a[i];
	}
	printf("%d",temp);
	return 0;
}
