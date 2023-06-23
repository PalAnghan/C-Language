#include<stdio.h>
#include<string.h>
main()
{
	char name[20],rev[20];
	int str,i,len;
	printf("Enter any number :");
	gets(name);
	
	strcpy(rev,name);
	
	len = strlen(name);
	
	strrev(name);
	
	str = strcmp(rev,name);
	
	if(str==0)
	{
		printf("Palidrome");
	}
	else
	{
		printf("not palidrome");
	}
	
}
