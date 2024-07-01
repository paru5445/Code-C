#include <stdio.h>
int main()
{
	double a=3, b=2;
	int c;
	
	c= a/b;  //this is called downasting as double is smaller memory than int. Adding (int) isnt needed. Hence, done automatically but the compiler
	printf("the divison is %d",c);
	
	return 0;
}
