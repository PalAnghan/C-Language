#include<stdio.h>
#include<conio.h>
main()
{
   int n,i=1;
   clrscr();
   printf("Enter a number : ");
   scanf("%d",&n);
   while(i<=n)
   {
     int square=i*i;
     printf("%d = %d\n",i,square);
     i++;
   }
   getch();
}
