#include<stdio.h>

void main()
{
	FILE *fp,*tp;
	int a;
		
	fp = fopen("C:\\Users\\123\\Desktop\\new1.txt","r");
	
	fscanf(fp,"%d",&a);
	
	fclose(fp);
	
	printf("%d",a);
	
	tp = fopen("C:\\Users\\123\\Desktop\\new2.txt","w");
	
	fprintf(tp,"%d",a);
	
	fclose(fp);
	
	
	
}
