//wap to determine whether a number is odd or even using return type function without parameter
#include<stdio.h>
int odd_even();

int main()
{
	if(odd_even() == 1)
	{
	printf("The number is even");
	}
	else
	{
	printf("The number is odd");	
	}
	return 0;
}

int odd_even()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	
	if(num%2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;     //in return you cannot print, have to return something so retun anything;
	}
}

