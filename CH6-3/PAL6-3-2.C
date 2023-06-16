#include<stdio.h>
#include<conio.h>
main()
{
   int i=1,n,count=1;
   clrscr();
   printf("Enter any number: ");
   scanf("%d",&n);
   for(i=1; i<=n; i++)
   {
      count*=i;
   }
   printf("\nFactorial: %d",count);

   getch();

}
