#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c;
  clrscr();
  printf("Enter a:");
  scanf("%d",&a);
  printf("Enter b:");
  scanf("%d",&b);
  c = (a*a*a)+(3*a*a*b)+(3*a*b*b)+(b*b*b);
  printf("answer :%d");
  getch();
}