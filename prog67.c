#include<stdio.h>
int main()
{
	int N,a,c=0,d;
	scanf("%d",&N);
	a=N/10;
	a=a*10;
	while(a<N)
	{
		c=c+1;
		a=a+1;
	}
	d=10-c;
	printf("%d",N+d);
	return 0;
	
}
