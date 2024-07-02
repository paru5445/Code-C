#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		printf("%d is greater and %d is smaller",a,b);
	}
    else
	{
		printf("%d is greater and %d is smaller",b,a);
	}
	
	return 0;
}
