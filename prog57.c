#include<stdio.h>
int main()
{
	int N,K,b[100],j,co=0;
	scanf("%d%d",&N,&K);
	for(j=1;j<=N;j++)
	{
		scanf("%d",&b[j]);
	}
	for(j=0;j<=N;j++)
	{
		if(b[j]==K)
		   co=co+1;
	}
	printf("%d",co);
	return 0;
}
