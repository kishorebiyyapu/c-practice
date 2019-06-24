#include<stdio.h>
int main()
{
	int N,a[100],i,s=0,avg;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=N;i++)
	{
		s=s+a[i];
	}
	avg=s/N;
	printf("%d",avg);
	return 0;
}
