#include<stdio.h>
#include<conio.h>
main()
{
	float area,base,hight;
	printf("Enter Base");
	scanf("%f",&base);
	printf("Enter Hight");
	scanf("%f",&hight);
	area=0.5*base*hight;
	printf("area of triangle=%f",area);
	getch();
}