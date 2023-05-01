#include<stdio.h>
#include<conio.h>

/*
	variables:
		- variables are the containers which
		  stores the value.
		syntax :
			DataType varName = value;

	DataType:
		- It decides which type of value will be
		  assigned to the variable.
		- It also allocates the memory bytes for that
		  variable.

		  Numbers     	=> Integer	=> int
		  Real numbers  => Float        => float
		  Characters    => Char         => char

	NOTE :
		- in C language, all variables must be declared
		  before calling any function.
*/

main()
{
	int a = 10,b = 5;
	char c = 'T';
	float pi = 3.14;
	clrscr();

	printf("%d + %d = %d\n",a,b,a+b);
	printf("Character: %c\n",c);
	printf("Pi: %.2f",pi);

	getch();
}




