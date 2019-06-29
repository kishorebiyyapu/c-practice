#include<stdio.h>
#include<math.h>
int main()
{
	int N;
	scanf("%d",&N);
	if(ceil(log2(N))==floor(log2(N)))
	    printf("yes");
	else
	   printf("no");
	return 0;
}
