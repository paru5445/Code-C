#include<stdio.h>
int main()
{

int roll, age;
char section;
char name(20);
char faculty(20);
char email(20);

printf("enter your name:");
scanf("%s",&name);
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

printf("Name: %s",name);
printf("Roll:  %d",roll);
printf("Faculty:  %s",faculty);
printf("Age: %d",age);
printf("Email: %s",email);
printf("Section: %c",section);

return 0;
}


