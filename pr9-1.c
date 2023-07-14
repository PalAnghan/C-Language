#include<stdio.h>

void main()
{
	FILE *p1,*p2;
	
	int i;
	
	p1 = fopen("C:\\Users\\123\\Desktop\\new3.txt","w");
	
	fprintf(p1,"Even number from even_file");
	 
	 for(i=50; i<=70; i++)
	 {
	 	if(i%2==1)
	 	{
	 		fprintf(p1,"%d ",i);
		 }	
	 }
	 fclose(p1);
	 
	 p2 = fopen("C:\\Users\\123\\Desktop\\new4.txt","w");
	 
	fprintf(p2,"odd number from even_file");
	 for(i=50; i<=70; i++)
	 {
	 	if(i%2==0)
	 	{
	 		fprintf(p2,"%d ",i);
		 }
	 }
	 fclose(p2);
}

