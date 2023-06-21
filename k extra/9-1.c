#include<stdio.h>
main()
{
	char str[20];
		int i;
	printf("Enter any string :");
	scanf("%[^\n]",&str);

	for(i=0;i!=40	;i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
		printf("%c",str[i]-32);
		}
		}	
			
			

}
