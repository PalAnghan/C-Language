#include<stdio.h>
#include<string.h>

 struct student
 {
 	int  id;
 	char name[3];
 	int  age;
 	char course[3];
 	char city[3];
 	int  standard;
 	char school[3];
 	
 };
 
void main()
 {
 	struct student a[3];
 	int i;
 	
 	for (i=0; i<3; i++)
 	{
 	   printf("%d/%d \n",i+1,3);
		printf("id :");
		scanf("%d",&a[i].id);
		printf("name :");
		scanf("%s",&a[i].name);
		printf("age :");
		scanf("%d",&a[i].age);
		printf("course :");
		scanf("%s",&a[i].course);
		printf("city :");
		scanf("%s",&a[i].city);
		printf("standard :");
		scanf("%d",&a[i].standard);
		printf("school :");
		scanf("%s",&a[i].school);
	 }
 	printf("id\tname\tage\tcourse\tcity\tstandard\tschool\t\n ");
 	
 	for(i=0; i<3; i++)
 	{
 		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\t\t\t\n",a[i].id,a[i].name,a[i].age,a[i].course,a[i].city,a[i].standard,a[i].school);
	 }
 }
 
