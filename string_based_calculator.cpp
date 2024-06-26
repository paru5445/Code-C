#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int first_number, second_number,ans,opt;
	char Add[20] = "Addition";
	char Sub[20] = "Subtraction";
	char Mul[20] = "Multiplication";
	char Div[20] = "Division";
	char b[20];
	char ch;

printf("enter two numbers for mathematical operation:");
scanf("%d%d",&first_number, &second_number);
printf("enter the operation to be performed : \n Addition, Subtraction, Multiplication, Divison \n");
scanf("%s",&b);

/*to lower case
int j=0;

while(b[j]){
	ch = b[j];
	putchar(tolower(ch));
	j++;
}
*/

opt=strcmp(b,Add);
    if (opt==0)
{
	ans = first_number + second_number;
	printf("The sum of the two numbers is %d",ans);
}

	else if (strcmp(b,Sub) == 0)
{
	ans = first_number - second_number;
	printf("The subtraction of the two numbers is %d"),ans;
}

    else if (strcmp(b,Mul) == 0)
{
	 ans =	first_number * second_number;
	 printf("The multiplication of the two numbers is %d",ans);
}

    else if (strcmp(b,Div) == 0)
{
	 ans =	first_number / second_number;
	 printf("The division of the two numbers is %lf",ans);
}
	
return 0;
}
