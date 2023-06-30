#include<stdio.h>

int factorial(int n)
{
	if(n>=1)
	{
		return n * factorial(n-1);
	}
	else
	{
		return 1;
	}
}
void main()
{
	int n,p;
	printf("Enter number :\t");
	scanf("%d",&n);
	p=factorial(n);
	printf("factorial of number is %d",p);
}
