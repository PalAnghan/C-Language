#include<stdio.h>

 main()
 {
 	 int n;
 	 printf("Enter array :",n);
 	 scanf("%d",&n);
 	 
 	int a[n],i,k=0;
 	printf("Enter array elements :\n");
 	for(i=0;i<n;i++)
 	{
	    printf("a[%d]  = ",i);
	    scanf("%d",&a[i]);
	    k++;
	 }
	 printf("Length of an array : %d",k);
	 

}
 
