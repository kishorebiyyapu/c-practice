#include<stdio.h>
int main()
{
	int N,M,s;
	scanf("%d%d",&N,&M);
	s=N*M;
	if(s%2==0)
	    printf("even");
	else
	   printf("odd");
	return 0;       
}
