#include<stdio.h>
main()

{
	 int j,i,a[5][5],sum=0;
	 printf("Enter array elements :\n");
	 for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{
	 		printf("a[%d][%d]",i,j);
	 		scanf("%d",&a[i][j]);
		 }
	 }
	 for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{
	 		if(i==0||j==0||i==4||j==4)
	 
	 		{
	 			printf("%d",a[i][j]);
	 			sum+=a[i][j];
			 }
			 else
			 {
			 	printf(" ");
			 }
		 }
		 printf("\n");
	 }
	printf("the sum of boundary of array is %d",sum);

}



