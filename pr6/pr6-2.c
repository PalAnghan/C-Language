 #include<stdio.h>
 #include<string.h>
 main()  
{
	int i,j,k,p,count=1;
	char name[40];
	printf("enter name: ");
	gets(name);
	printf("the freqency of string:\n");
	for(i=0;name[i]!=NULL;i++)
	{
		for(j=i+1;name[j]!=NULL;j++)
		{
			if(name[i] == name[j])
			{
				count++;
			}
		}
		printf("%c => %d\n",name[i],count);
		count = 1;
	}
}

