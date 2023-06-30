#include<stdio.h>


int ar(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
}
int s(int a[],int n)
{
   int i,sum=0;
   if(n>0)
   {
     for(i=0;i<n;i++)
      {
        sum+=a[i];  	
      }
	 return sum;
   }
   else
   {
   	return 0;
   }

}
int na(int b[],int n,int a[])
{
    int i;
	for(i=0;i<n;i++)
	{
	  b[i] = a[i]+s(a,i);	
	}

}
void main()
{
	int n,i;
	printf("Enter number ");
	scanf("%d",&n);
	
	int a[n],b[n];
	ar(a,n);
	
	na(b,n,a);
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}
