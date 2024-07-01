#include<stdio.h>
int main()
{
int first_number, second_number, sum, mul, sub;
double div;
char option;

do
{
printf("Enter any two numbers to perform mathematical operation: \n");
scanf("%d%d",&first_number, &second_number);

//operation
sum = first_number + second_number;
mul = first_number * second_number;
sub = first_number - second_number;

//divison
if(second_number !=0) 
   { 
     div = (double) first_number / second_number; //typecasting
     printf("the division is %.2lf \n",div); 
   }
else
   {
	 printf("Here the first number is divided by zero, Error.\n");
   } 

//result
printf("The sum is %d \n",sum);
printf("The multiplication is %d \n",mul);
printf("The subtraction is %d \n",sub);
printf("\n");
printf("Do you want to continue?");
printf("\n");
printf("Press 'y' to continue and any other key to escape:");
 scanf(" %c",&option);
printf("\n");
}
while(option == 'y' || option =='Y');

return 0;
}

