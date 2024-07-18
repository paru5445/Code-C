//wap prime or composite using return type function with parameter
#include<stdio.h>
int po(int);
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	
	if (po(num)== 1)
	printf("the number is prime");
	
	else
	printf("the number is composite");
	
	return 0;
}

int po(int x)
{
	int i, n=0;
	for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            
             n=n+1;

        }
    }
    if(n==2)
    return 1;
	else
	return 0;
}
