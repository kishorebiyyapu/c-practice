#include<stdio.h>
int main()
{
	int N,i,c=0;
	scanf("%d",&N);
	for(i=1;i<=10;i++)
	{
		if(i==N)
		{
			c=1;
		}
	}
	if(c==1)
	   printf("yes");
	else
	    printf("no");
    return 0;
}
