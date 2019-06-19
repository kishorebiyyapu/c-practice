#include<stdio.h>
#include<math.h>
int main()
{
	int a[100],tem=0,n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=n;j++)
	   {
	   	if(a[j]>a[j+1])
	   	{
	   		tem=a[j];
	   		a[j]=a[j+1];
	   		a[j+1]=tem;
		   }
	   }
	}
	for(i=1;i<=n;i++)
	{
	printf("%d ",a[i]);
    }
	return 0;
}
