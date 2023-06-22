#include<stdio.h>
#include<string.h>
main(){
	char i,pas1[20]="123456",email1[40]="xyz@gmail.com",pas2[20],email2[40],cpy1,cpy2;
	int len1,len2;
	printf("enter your e-mail: ");
	gets(email2);
	printf("enter your password: ");
	gets(pas2);
	
	cpy1=strcmp(email1,email2);
	cpy2=strcmp(pas1,pas2);	
	
	if( cpy1==0 && cpy2==0){
		printf("login succesfully");
	}
		else{
			printf("login failed. invalid credentials");
	}
}

