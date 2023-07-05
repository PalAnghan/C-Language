#include<stdio.h>
void addition()
{
	float n1,n2;
	printf("enter a first number:- ");
	scanf("%f",&n1);
	printf("enter a second number:- ");
	scanf("%f",&n2);
 
	printf("the addition of %f and %f : %f\n",n1,n2,n1+n2);
}
void decress()
{
	float n1,n2;
	printf("enter a first number:- ");
	scanf("%f",&n1);
	printf("enter a second number:- ");
	scanf("%f",&n2);
 
	printf("the decress of %f and %f : %f\n",n1,n2,n1-n2);
}
void multiplication()
{
	float n1,n2;
	printf("enter a first number:- ");
	scanf("%f",&n1);
	printf("enter a second number:- ");
	scanf("%f",&n2);
 
	printf("the multiplication of %f and %f is %f\n",n1,n2,n1*n2);
}
void devition()
{
	float n1,n2;
	printf("enter a first number:- ");
	scanf("%f",&n1);
	printf("enter a second number:- ");
	scanf("%f",&n2);
 
	printf("the divition of %f and %f : %f\n",n1,n2,n1/n2);
}
void module()
{
	int n4,n3;
	printf("enter a first number:- ");
	scanf("%d",&n4);
	printf("enter a second number:- ");
	scanf("%d",&n3);
 
	printf("the module of %d and %d : %d\n",n4,n3,n4%n3);
}
void main()
{
	int choice;
	float n1,n2;
	int n4,n3;
	do
	{
	printf("\nEnter........\n");
	printf("1 for + \n");		
	printf("2 for - \n");
	printf("3 for * \n");
	printf("4 for / \n");
	printf("5 for %% \n");
	printf("0 for exit\n");
	printf("Enter your choice:-");
	scanf("%d",&choice);
	switch(choice){
			case 1:
				addition();
				break;
				
			case 2:
				decress();
				break;
			
			case 3:
				multiplication();
				break;
			
			case 4:
				devition();
				break;
			
			case 5:
				module();
				break;
			
			default:
				printf("Invalide choice.....");
				break;
 		}
 	}while(choice!=0);
}
