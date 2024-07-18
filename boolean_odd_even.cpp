//wap to determine whether a number is odd or even using Boolean return type function with parameter
#include<stdio.h>
bool oe();
int num= 4;
int main()
{
	/*printf("enter a number:");
	scanf("%d",&num);*/
	
	if (oe())
	{
		printf("even");
	}
		else
		{
			printf("odd");
		}
		return 0;	
}

bool oe()
{
	if (num%2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

