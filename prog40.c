#include<stdio.h>
int main()
{
	int a,n,b,f,i;
	scanf("%d",&n);
	a=0;
	b=1;
	printf("1 ");
	for(i=2;i<=n;i++)
	{
		f=a+b; 
		a=b;
		b=f;
	    printf("%d ",f);
	}

	return 0;
}
