#include<stdio.h>
int main()
{
	int first_number, second_number, sum;
	printf("enter two numbers for addititon \n");
	scanf("%d%d",&first_number, &second_number);
	
	sum = first_number + second_number;
	printf("the addition is %d",sum);
	
	return 0;
}
