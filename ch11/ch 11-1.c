#include<stdio.h>

void main()
{
	int n;
	int *ptr;
	system("Color 41");
	printf("Enter the array:");
	scanf("%d",&n);
	
	int a[n],i;
	ptr = a;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,*(ptr+i)**(ptr+i));
		}	
}
