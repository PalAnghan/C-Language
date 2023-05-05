#include<stdio.h>
#include<conio.h>
main()
{
     int n;
     clrscr();
     printf("Enter any number : ");
     scanf("%d",&n);
     if (n>0)
     {
       printf("postivite number");
     }
     else if (n==0)
     {
       printf("neutral number");
     }
     else
     {
       printf("negative number");
     }
     getch();
}