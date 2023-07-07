#include<stdio.h>

 int getInt();
 
 void main()
 {
 	int n,i;
 	system("Color 60");
 	
 	printf("Enter the array's size:");
 	n = getInt();
 	
 	int a[n];
 	int *p[n];
 	int *t[n];
 	
 	for(i=0;i<n;i++)
 	{
 		p[i] = &a[i];
	 }
 	
 	printf("Enter array elements:\n");
 	
 	for(i=0;i<n;i++)
 	{
 		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
		 	 }
	 printf("Reversed  array elements:\n");
 	
 	for(i=0;i<n;i++)
 	{
 		t[n-i-1]=&a[i];
	 }
	 for(i=0;i<n;i++)
	 {
	 	printf("a[%d]: %d\n",i,*t[i]);
	 }
 	
 }
int getInt(){
	int x;
	scanf("%d",&x);
	
	return x;
}
