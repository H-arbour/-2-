#include <stdio.h>

int main()
{
	int i,j,k,N,M;
	while(2>1)
{
	printf("������N,M��ֵ(N��M=-8848����):");
	scanf("%d%d",&N,&M);
	if (N==-8848||M==-8848) 
	break;
	
	for(i=1;i<=N;i++)
	{
		for(j=N-1;j>N-i;j--)
		printf(" ");
		
		for(k=1;k<=M;k++)
		printf("*");
		
		printf("\n");
	}
}
	return 0;
} 
