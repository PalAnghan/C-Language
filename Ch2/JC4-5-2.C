#include<stdio.h>
#include<conio.h>

main() {

	int a;
	clrscr();

	printf("Enter your marks: ");
	scanf("%d",&a);

	if(a<=100 && a>=90) {
		printf("Congratulations !!\n");
		printf("You've got A1 grade !!");
	}
	else if(a<90 && a>=80) {
		printf("Congratulations !!\n");
		printf("You have got A2 grade!!");
	}
	else if(a<80 && a>=50) {
		printf("You got B grade !!");
	}
	else if(a<50 && a>=33) {
		printf("Congratulations !!\n");
		printf("You somehow managed to pass !!");
	}
	else if(a<33 && a>=0) {
		printf("Better luck next year !!");
	}
	else {
		printf("We don't have any grade to measure your knowledge !!");
	}
	getch();
}