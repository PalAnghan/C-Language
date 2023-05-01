#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define P printf
#define clear clrscr
#define stop getch
/*
	Keywords :	32
		- reserved words which cannot be
		  used in other purpose.
		- data types, loops, conditional statements...
		- int, char, float, while, do, for, if, else, switch...

	Constants :
		- fixed value
		- using const keyword
			const DataType varName = value;
			- const variables must be initialized.
		- using MACRO
			- use of #define pre-processor
			  #define varName value

	Scanf Function:
		- user input
		syntax:
			scanf("only format specifier",address of variable);

		- Address of operator:	&varName
*/
//SWAP two numbers using third variable
main()
{
	int a,b,c;
	clrscr();

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);

	c = a;
	a = b;
	b = c;

	printf("a: %d\nb: %d",a,b);

	getch();
}