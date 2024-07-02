#include<stdio.h>
int main()
{
	int first_number, second_number, third_number;
	printf("Enter two numbers to swap");
	scanf("%d%d",&first_number,&second_number);
	printf("The original values: \n");
	printf("%d is the first number. \n",first_number);
	printf("%d is the second number. \n",second_number);
	
	printf("\n");
	printf("After Swapping \n");
	third_number = first_number;
	first_number = second_number;
	second_number = third_number;
	third_number = first_number;
	
	printf("%d is the first number.\n",first_number);
	printf("%d is the second number.\n",second_number);
	
	return 0;
}
