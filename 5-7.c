#include <stdio.h>
void cube(double x);
int main(void)
{
	double input;
	printf("please input a double number: ");
	scanf("%1f",&input);

	cube(input);
	
	return 0;
}
void cube(double x)
{

	printf("the cube of %e is %e\n", x, x * x * x);
}
