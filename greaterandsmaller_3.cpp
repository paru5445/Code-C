#include<stdio.h>
int main()
{
	int first_number, second_number, third_number;
	printf("Enter three numbers to compare.");
	printf("\n");
	scanf("%d%d%d",&first_number, &second_number, &third_number);
	
	int a=first_number, b=second_number, c=third_number;
	
	printf("For Greatest: \n");
	if(a>b && a>c)
	{
		printf("%d is the greatest.",first_number);
	}
	else if(b>a && b>c)
	{
		printf("%d is the greatest.",second_number);
	}
	else 
	{
		printf("%d is the greatest.",third_number);
	}
	
	printf("\n");
	printf("For Smallest: \n");
		if(a<b && a<c)
	{
		printf("%d is the smallest.",first_number);
	}
	else if(b<a && b<c)
	{
		printf("%d is the smallest.",second_number);
	}
	else 
	{
		printf("%d is the smallest.",third_number);
	}
	
	
	return 0;
}

