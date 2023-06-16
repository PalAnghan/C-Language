#include<stdio.h>
main()
{
    int r,c,sum;
	printf("Enter number of row :");
	scanf("%d",&r);
	printf("Enter number of columns :");
	scanf("%d",&c);
	
	int a[r][c],i,j,ave;
	printf("Enter array elements :");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] ",i,j);
			scanf("%d ",&a[i][j],i,j);
			sum+=a[i][j];
		}
	}
	ave=sum/(r*c);
	printf("%d ",ave);
	
	
}
