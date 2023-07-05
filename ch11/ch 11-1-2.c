#include<stdio.h>
void main()
{
	int x,y;
	int *ptr1,*ptr2;
	system("Color E5");
	
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	ptr1 = &x;
	ptr2 = &y;
    
	printf("Before swapping:\n");
	printf("x:%d\ny:%d",*ptr1,*ptr2);
    x=x+y;
    y=x-y;
    x=x-y;
    
	printf("After swapping:\n");
	printf("x:%d\ny:%d",*ptr1,*ptr2);
	
	
}
