#include<stdio.h>
#include<conio.h>
main()
{
	int p,r,n;
	float g;
	clrscr();
	printf("Enter p:");
	scanf("%d",&p);
	printf("Enter r:");
	scanf("%d",&r);
	printf("Enter n:");
	scanf("%d",&n);
	g = (p*r*n)/100;
	printf("simple interest : %d");
	getch();
}