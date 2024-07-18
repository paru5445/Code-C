//wap to calculate area of circle using return type function with parameter 
#include<stdio.h>
float area(float);

int main()
{
	float radius;
	printf("Enter the radius of the circle \n");
	scanf("%f",&radius);
	printf("The area of circle is %f", area(radius));
	return 0;
}

float area(float r)
{
	float result, pi= 3.14;
	result = pi * r * r;
	
	return result;
}

