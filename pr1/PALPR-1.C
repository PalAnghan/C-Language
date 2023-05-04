#include<stdio.h>
#include<conio.h>
main()
{       float f;
	int c;
	clrscr();
	printf("the temperature is celsius:");
	scanf("%d",&c);
	f=(c*9/5)+32;
	printf("the temperature is fahrenheit:%.2f",f);
	getch();
}