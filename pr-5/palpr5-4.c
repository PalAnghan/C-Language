
#include<stdio.h>
main()
{
	int r,c;
	printf("Enter a number of row: ");
	scanf("%d",&r);
	printf("Enter a number of column: ");
	scanf("%d",&c);
	int a[r][c],i,l,j,row,col,sum,sum2;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);

		}
	}
	
	printf("Enter Row Number :-\n ");
	scanf("%d",&row);
	
	
	printf("Elements Of Row :-\n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
			if(i == row)
			{
				printf("%d",a[i][j]);
				sum += a[i][j];
			}

		}
	}
	
	printf("Sum Of %d Row Is :- %d",row,sum);
	
	printf("Enter  Column Number :- ");
	scanf("%d",&col);
	
	printf("Elements Of Column :- ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
			if(j == col)
			{
				printf("%d",a[i][j]);
				sum2 += a[i][j];
			}

		}
	}
	
	printf("Sum Of %d Column Is :- %d",col,sum2);
}
