#include<stdio.h>
main()
{
	int n;
	printf("Enter the array size :");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter array elements : \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("negative elements from an array :");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
	}
}

