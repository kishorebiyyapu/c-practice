#include<stdio.h>
int main()
{
	int N,A,D,s,t;
	scanf("%d",&N);
	scanf("%d",&A);
	scanf("%d",&D);
	s=((2*A)+(N-1)*D);
	t=N*s/2;
	printf("%d",t);
    return 0;
}
