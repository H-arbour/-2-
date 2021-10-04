#include <stdio.h>

int main()
{
	int i,j,k,N;
	while(2>1)
	{
	printf("请输入N的值(-8848结束):");
	scanf("%d",&N);
	if (N==-8848) 
	break;
	
	for(i=1;i<=N;i++)
	{
		for(j=N-2;j>=N-i;j--)
		printf(" "); 
		
		for(k=1;k<=2*(N-i)+1;k++)
		printf("*");
		
		printf("\n");
	}
}
	return 0;
}
