#include<stdio.h>
int main()
{
	int h1,h2,m1,m2;
	scanf("%d",&h1);
	scanf("%d",&m1);
	scanf("%d",&h2);
	scanf("%d",&m2);
	if(h1>h2)
	{
		printf("%d %d",h1-h2,m1-m2);
	}
	else
	{
		printf("%d %d",h2-h1,m2-m1);
	}
	return 0;
}
