
#include<stdio.h>
int n;
int in();
void arrayinput(int[]);
int arrayinsert(int[]);
void arrayupdate(int[]);
void arraydisplay(int[]);

void main()
{

	int a[n];
	
	arrayinput(a);
	int choice;
	
	do
	{
		printf("Enter 1 To Insert In Array\n");
		printf("Enter 2 To Update In Array\n");
		printf("Enter 3 To Delete In Array\n");
		printf("Enter 4 To Display In Array\n");
		printf("Enter 5 To Exit !!\n");
		printf("Enter Your Choice :- ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				n = arrayinsert(a);
				break;
			case 2:
				arrayupdate(a);
				break;
			case 3:
				n = arrayminus(a);
				break;
			case 4:
				arraydisplay(a);
				break;
			case 5:
				printf("Exited !!!!");
				break;
			default:
				printf("Invalid Choice | Try Again !!");
				break;	
		}
	}
	while(choice!=5);
}
int in()
{
	int n;
	printf("Enter Length Of Array :- ");
	scanf("%d",&n);
	return n;
}
void arrayinput (int a[])
{
	int i,n;
	n=in();
	for(i=0;i<n;i++)
	{
		printf("a[%d] Element :- ",i);
		scanf("%d",&a[i]);
	}
}

int arrayinsert(int a[])
{
	int i,pos,val;
	
	printf("Enter Position :- ");
	scanf("%d",&pos);
	printf("Enter Value :- ");
	scanf("%d",&val);
	
	for(i=n;i>=pos;i--)
	{
		a[i] = a[i-1]; 
	}
	a[pos] = val;
	n++;
	return n;
}
void arrayupdate(int a[])
{
	int i,pos,val;
	
	printf("Enter Position :- ");
	scanf("%d",&pos);
	printf("Enter Value :- ");
	scanf("%d",&val);
	
	for(i=n;i>pos;i--)
	{
		a[i+1] = a[i]; 
	}
	a[pos] = val;
	n++;
}
void arraydisplay(int a[])
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] :- %d\n",i,a[i]);
	}
}
int arrayminus(int a[])
{
	int i,pos,val;
	printf("Enter Position :- ");
	scanf("%d",&pos);
	printf("Enter Value :- ");
	scanf("%d",&val);
	
	for(i=n;i>=pos;i--)
	{
		a[i] = a[i-1]; 
	}
	n--;
	return n;
}



