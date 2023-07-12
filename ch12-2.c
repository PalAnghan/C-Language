#include<stdio.h>
#include<string.h>

 struct  Employee
 {
 	int  id;
 	char name;
 	int  age;
 	char role;
 	char city;
 	int experience;
 	char companyname;

 };
 
void main()
 {
 	int n;
 	printf("Enter value of n:"); 
 	scanf("%d",&n);
 	
	struct  Employee a[n];
 	int i;
 	
 	for (i=0; i<n; i++)
 	{
 	   printf("%d/%d ",i+1,3);
		printf("id :\t");
		scanf("%d",&a[i].id);
		printf("name :\t");
		scanf("%s",&a[i].name);
		printf("age :\t");
		scanf("%d",&a[i].age);
		printf("role :\t");
		scanf("%s",&a[i].role);
		printf("city :\t");
		scanf("%s",&a[i].city);
		printf("experience :\t");
		scanf("%d",&a[i].experience);
		printf("company name :\t");
		scanf("%s",&a[i].companyname);
	 }
	 	printf("id\tname\tage\trole\tcity\texperience\tcompanyname\t\n ");
 	
 	for(i=0; i<n; i++)
 	{
 		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\t\t\t\n",a[n].id,a[n].name,a[n].age,a[n].role,a[n].city,a[n].experience,a[n].companyname);
	 }
 	
 	
 }
