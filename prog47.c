#include<stdio.h>
int main()
{
	int N,a[10],i,t,s;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&a[i]);
	}
	t=s=a[1];
	for(i=1;i<=N;i++)
	{
		if(t>a[i])
		{
			t=a[i];
		}
		if(s<a[i])
		{
			s=a[i];
		}
	}
	printf("%d %d",t,s);
	return 0;
}
