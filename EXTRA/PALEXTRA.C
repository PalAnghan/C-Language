#include<stdio.h>
#include<conio.h>
main()
{
   int n,i=1;
   clrscr();
   printf("Enter a number |");
   scanf("%d",&n);
   while(i<=n)
   {
    if(n%11==0)
    {
	printf("palindrom Number........");
	break;
    }
    else
    {
	printf("non palindrom Number......");
	break;
    }

    n++;
    break;
    }
   getch();
}


