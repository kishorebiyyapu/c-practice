#include<stdio.h>
int main()
{
	int a,m,h;
	scanf("%d",&a);
	if(a<60)
	{
		printf("0 %d",a);
	}
	else
	{
		h=a/60;
		m=a%60;
		printf("%d %d",h,m);
	}
	return 0;
	
}
