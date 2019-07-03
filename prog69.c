#include<stdio.h>
int main()
{
	int N,M,d;
	scanf("%d%d",&N,&M);
	if(N>=M)
	   d=N-M;
	else
	    d=M-N;
	if(d%2==0)
	    printf("even");
	else
	    printf("odd");		   
	return 0;    
}
