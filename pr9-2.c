#include<stdio.h>
#include<string.h>

 struct student
 {
 	int  Rollno;
 	char name1[20];
 	int  chemistry;
 	int  mathematics;
 	int  physics;
 	float percentage;
 	
 };
 
void main()
 {
 	FILE *p1;
	 struct student a[5];
 	int i;
 	
 
 	p1 = fopen("C:\\Users\\123\\Desktop\\new5.txt","w");

 	
 	for (i=0; i<5; i++)
 	{
 	   printf("Enter student : %d\n",i+1);
		printf("Roolno :",i);
		scanf("%d",&a[i].Rollno);
		printf("name : :",i);
		scanf("%s",&a[i].name1);
		printf("chemistry :",i);
		scanf("%d",&a[i].chemistry);
		printf("mathematics :",i);
		scanf("%d",&a[i].mathematics);
		printf(" physics :",i);
		scanf("%d",&a[i].physics);
		a[i].percentage=(a[i].chemistry+a[i].mathematics+a[i].physics)/3;
   }
 	fprintf(p1,"Roolno\tname1\tchemistry\tmathmitics\tphysics\tpercentage\n ");
 	
 	for(i=0; i<5; i++)
 	{
 		fprintf(p1,"%d\t%s\t%d\t%d\t%d\t%f\t\n",a[i].Rollno,a[i].name1,a[i].chemistry,a[i].mathematics,a[i].physics,a[i].percentage);
	 }
	 fclose(p1);
 }
 

