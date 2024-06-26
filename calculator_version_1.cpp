#include<stdio.h>
int main()
{
	int first_number, second_number,Add,Sub,Mul;
	char opt, Addition, Subtraction, Multiplication, Divison;
	double Div;
	
printf("enter two numbers for mathematical operation:");
scanf("%d%d",&first_number, &second_number);
printf("enter the operation to be performed : \n Addition, Subtraction, Multiplication, Divison \n");
scanf("%s",&opt);

    if (opt == Addition)
{
	Add = first_number + second_number;
	printf("The sum of the two numbers is %d",Add);
}
	
	else if (opt == Subtraction)
{
	Sub = first_number - second_number;
	printf("The subtraction of the two numbers is %d",Sub);
}

    else if (opt == Multiplication)
{
	 Mul =	first_number * second_number;
	 printf("The multiplication of the two numbers is %d",Mul);
}

    else if (opt == Divison)
{
	 Div =	first_number / second_number;
	 printf("The division of the two numbers is %lf",Div);
}
	
return 0;
}
