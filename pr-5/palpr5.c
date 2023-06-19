#include<stdio.h>
main()
{	int r,c;
    printf("Enter the row size :");
    scanf("%d",&r);
    
    printf("Enter the column size :");
    scanf("%d",&c);
    int a[r][c],i,j,max;
    
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
			if(a[i][j]>max)
			{
				max = a[i][j];
			}
		}
	}
	printf("maximum number :%d",max);
}
