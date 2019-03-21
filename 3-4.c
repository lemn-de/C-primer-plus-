#include<stdio.h>
int main(void)
{
	float fp;
	printf("Enter a floating_point value: ");
	scanf("%f",&fp);
	printf("fixed_point notation: %f\n",fp);
	printf("exponential notation: %e\n",fp);
	printf("p notation: %a\n",fp);
	
	return 0;
 } 
