#include<stdio.h>
#include<string.h>
int main()
{
	char S[100];
	int K,i;
	
	scanf("%s%d",&S,&K);
	for(i=0;i<K;i++)
	{
		printf("%c",S[i]);
	}
	return 0;
}
