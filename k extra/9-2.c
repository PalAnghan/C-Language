#include<stdio.h>
main()
{
	char str[20];
		int i;
	printf("Enter any string :");
	scanf("%[^\n]",&str);

	for(i=0;i!=40	;i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
		printf("%c",str[i]+32);
		}
	}	
			
			

}
