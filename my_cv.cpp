#include<stdio.h>
int main()
{

int roll, age;
char section;
char name[20];
char faculty[20];
char email[20];

printf("enter your name:");
scanf("%[^\n]s",&name); //for space
//scanf("%s",&name);
printf("enter your roll:");
scanf("%d",&roll);
printf("enter your faculty:");
scanf("%s",&faculty);
printf("enter your age:");
scanf("%d",&age);
printf("enter your email:");
scanf("%s",&email);
printf("enter your section:");
scanf(" %c",&section);

//output

printf("Name: %s \n",name);
printf("Roll:  %d \n",roll);
printf("Faculty: %s \n",faculty);
printf("Age: %d \n",age);
printf("Email: %s \n",email);
printf("Section: %c \n",section);

return 0;
}


