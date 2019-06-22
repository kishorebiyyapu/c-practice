#include<stdio.h>
int main()
{
	int a,b,tem;
	scanf("%d",&a);
	scanf("%d",&b);
	tem=a;
	a=b;
	b=tem;
	printf("%d %d",a,b);
}
