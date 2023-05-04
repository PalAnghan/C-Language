#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();
    printf("first angle:");
    scanf("%d",&a);
    printf("second angle:");
    scanf("%d",&b);
    c = 180 - (a+b);
    printf("third angle: %d",c);
    getch();
 }