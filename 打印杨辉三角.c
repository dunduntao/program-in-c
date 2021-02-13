#include <stdio.h>
#include <stdlib.h>
#define N 20 

void main()
{
	int i,j,m=0,k,a[N][N];
	while(m<=0||m>=15)
		{	
			printf("请输入要打印的行数:");
			scanf("%d",&m);
		}
	printf("%d行的杨辉三角如下：\n",m);
	
	for(i=1;i<=m;i++)
		a[i][1]=a[i][i]=1;
	for(i=3;i<=m;i++)
		for(j=2;j<=i-1;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	for(i=1;i<=m;i++)
		{
			for(k=0;k<m-i;k++)
				printf("  ");
			for(j=1;j<=i;j++)
				printf("%4d",a[i][j]);
			printf("\n");
		}
	printf("\n");
		

 } 
