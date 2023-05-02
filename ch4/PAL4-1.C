#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  int a=10,b=20;
  printf("a:%d,b:%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("a:%d,b:%d\n",a,b);

  getch();
}