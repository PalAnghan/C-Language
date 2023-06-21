#include<stdio.h>
main()
{
	char str[20];
	int i;
	printf("Enter any string :");
	scanf("%[^\n]",&str);

	for(i=0;i<40;i++)
	{
		if(i == 0)
		{
			if(str[i]>=97 && str[i]<=122)
			{		
					str[i]-=32;	
			}
		}
		else
		{
			if(str[i] == ' ')
			{
				if(str[i+1]>=97 && str[i+1]<=122)
				{		
					str[i+1]-=32;	
				}
			}
		}
	}
			printf("Your title case string is: %s",str);
}
