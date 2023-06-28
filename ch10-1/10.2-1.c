#include<stdio.h>

int getint(){
	int n;
	printf("Enter a number:-");
	scanf("%d",&n);
	return n;
}
int arraysum(int a[],int n)
{
	int i,sum = 0;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}
int arrayInpute(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:-",i);
		scanf("%d",&a[i]);
	}
}
void main()
{
	int n,sum;
	n = getint();
	
	int a[n];
	
	arrayInpute(a,n);
	sum = arraysum(a,n);
	
	printf("the sum of an array:-",sum);
}
