//试编程输出下列图案，要求：1）程序输入行数N值；2）程序能重复测试不同值的输出情形。
//下图是输入N值为4的输出图案。
//*******
// *****
//  ***
//   *

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
