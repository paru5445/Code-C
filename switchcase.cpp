#include<stdio.h>
int main()
{
	int choice,num;
	char cont;
	printf("******************************************************************");
	printf("\n");
	printf("Determining odd even and positive negative numbers.");
    printf("Options");
   
   do{
    printf("1 For Odd and Even \n");
    printf("2 For Positive Negative\n");
    printf("Enter your choice \n");
    scanf("%d",&choice);
    printf("Enter your number:\n");
    scanf("%d",&num);
    
    switch(choice)
{
    case 1:
    
    		if(num%2 == 0)
    		{
    			printf("Odd \n");
			}
			else
			{
				printf("Even \n");
			}
		
		break;
	
		
		case 2:
	
    	
    		if(num < 0)
    		{
    			printf("Negative \n");
			}
			else if (num > 0)
			{
				printf("Positive \n");
			}
			else
			{
				printf("Number is 0 \n");
			}
		break;
   
		
		default:
			printf("No option. \n");
}
printf("Do you want to continue. press y to continue. \n");
scanf(" %c",&cont);
}

while(cont == 'y' || cont =='Y');
return 0;
}

