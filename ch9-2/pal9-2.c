#include<stdio.h>
#include<string.h>

main(){
	char i,pas[20],u=0,s=0,d=0,l=0,len;
	printf("create your password: ");
	gets(pas);
	
	len=strlen(pas);
	
	for(i=0;i<len;i++){
		if(pas[i]>=65 && pas[i]<=90){
			u++;
		}
		else if(pas[i]>=97 && pas[i]<=122){
			l++;
		}
		else if(pas[i]>=48 && pas[i]<=57){
			d++;
		}
		
		else{
			s++;
		}
	}
		
	if(u>0 && d>0 && s>0 && l>0 &&len>=6){
		printf("your password is strong..");
	}
	else{
		printf("your password is not strong..");
	}
}

	
	

