#include<stdio.h>
#include<conio.h>
main()
{
      int marks;
      clrscr();
      printf("Enter a Marks : ");
      scanf("%d",&marks);
      if (marks >=0 && marks <=33)
      {
	printf("Grade 'F' \n");
      }
      else if (marks >=34 && marks <=40)
      {
	printf("Grade 'D' \n");
      }
      else if (marks >=41 && marks <=50)
      {
	printf("Grade 'C+' \n");
      }
      else if (marks >=51 && marks <=60)
      {
	printf("Grade 'C' \n");
      }
      else if (marks >=61 && marks <=70)
      {
	printf("Grade 'B' \n");
      }
      else if (marks >=71 && marks <=80)
      {
	printf("Grade 'B+' \n");
      }
      else if (marks >=81 && marks <=90)
      {
	printf("Grade 'A' \n");
      }
      else if (marks >= 91 && marks <=100)
      {
	printf("Grade 'A+' \n");
      }
      else if (marks >= 100)
      {
	printf("Invalid marks");
      }
      else if (marks <= 0)
      {
	printf("Invalid marks");
      }
      getch();
}


