#include<stdio.h>
#include<conio.h>
main()
{       int a,b;
	clrscr();
	printf("Enter number. a: ");
	scanf("%d",&a);
	printf("Enter number. b: ");
	scanf("%d",&b);
	if (a<=8)
	{
	  printf("Maximum number");
	}
	else
	{
	  printf("Minimum number");
	}

	getch();
}