#include<stdio.h>
int main()
{
int input;
char option;	

do
{
printf("enter a number ");
scanf("%d",&input);

if(input%2 == 0)
{

printf("odd");
}
else
{
	printf("even");
}

 printf("\n");
 printf("do you want to continue \n");
 printf("\n");
 printf("press y for continue and any other key for exit");
 scanf(" %c",&option);
}
 
 while(option == 'y' || option =='Y');

 	


	return 0;
}
