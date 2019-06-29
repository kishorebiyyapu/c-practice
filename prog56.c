#include<stdio.h>
int main()
{
	int N,i=1,j,a[100];
	scanf("%d",&N);
	while(N!=0)
	{
		a[i]=N%10;
		N=N/10;
		i++;
	}
	for(j=i-1;j>=1;j--)
	{
		printf("%d ",a[j]);
	}
	return 0;
}
