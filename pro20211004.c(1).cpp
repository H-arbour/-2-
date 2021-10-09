//试编程输出下列图案，要求：1)程序输入行数N及每行字符个数M；2）程序能重复测试不同值的输出情形。

#include <stdio.h>

int main()
{
	int i,j,k,N,M;
	while(2>1)
{
	printf("请输入N,M的值(N或M=-8848结束):");
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
