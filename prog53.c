#include<stdio.h>
int main()
{
	int N,s=0,r;
	scanf("%d",&N);
	while(N!=0)
	{
		r=N%10;
		s=s+r;
		N=N/10;
	}
	printf("%d",s);
	return 0;
}
