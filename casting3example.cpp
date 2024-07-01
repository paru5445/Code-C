#include <stdio.h>
int main()
{
	int a=3, b=2;
	float c;
	
	//typecasting is when we need to convert one data type to another 
	c=(float) a/b;  //this is called upcasting as float is a bigger memory than int. adding (float) WE GET THE REQUIRED RESULT. this is done manually by the programmer.
	printf("the divison is %f",c);
	
	return 0;
	
	
}
