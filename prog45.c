#include<stdio.h>
int main()
{
	int N,c=0;
	scanf("%d",&N);
	while(N!=0)
	{
		N=N/10;
		c=c+1;
	}
	printf("%d",c);
	return 0;
}
