#include<stdio.h>
#include<string.h>

void main()
{
   char str[20];
   
   printf("Enter any string :");
   gets(str);
    
   int i,len=0;
   int *p[20]; 
   
     for(i=0; i<20; i++)
    {
    	p[i]=&str;
	}
    
    for(i=0; str[i]!=NULL; i++)
    {
    	len++;
	}
	
   printf("The Length of string: %d",len);
}
