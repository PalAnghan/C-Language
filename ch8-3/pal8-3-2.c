#include<stdio.h>

main()
{
    int r,c,sum;
	printf("Enter number of row :");
	scanf("%d",&r);
	printf("Enter number of columns :");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],d[r][c],i,j;
	printf("Enter array elements\n :");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j] = a[i][j] + b[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",d[i][j]);
			
		}
		printf("\n");
	}
	
}

