#include<stdio.h>
int main()
{
	int N,K,a[100],i,c=0;
	scanf("%d%d",&N,&K);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<+N;i++)
	{
		if(a[i]==K)
		   c=c+1;
	}
	printf("%d",c);
	return 0;
}
