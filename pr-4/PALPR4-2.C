#include<stdio.h>
#include<conio.h>
main()
{
   int i,j,k=10;
   clrscr();
   for(i=1;i<=5;i++)
     {
       for(j=1;j<=i;j++)
	 {
	   k++;
	   printf("%d ",k);
	 }
       printf("\n");
     }
   getch();
  }

