#include <stdio.h>
int addition(int, int); //function declaration

int main()
{
	
	int  first_number, second_number, result;
	printf("enter two number for addition:");
	scanf("%d%d", &first_number, &second_number);
	
	//addition(first_number, second_number) = result;
	printf("the result is %d",addition(first_number, second_number));
	


return 0;
}

int addition(int x, int y)
{
	int sum;
	sum = x + y;

 return sum;	
}

