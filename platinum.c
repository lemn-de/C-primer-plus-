#include<stdio.h>
int main(void)
{
	float weight;
	float value;
	
	printf("Are you worth your weihght in platinum?\n");
	printf("Let's check it out.\n'");
	printf("Please inter your weight in pounds:");
	
	scanf("%f",&weight);
	value=1700.0*weight*14.5833;
	printf("Your weight in platinum is worth $%.2f.\n",value);
	printf("Your are easily worth that!If platium prices drop,\n");
	printf("eat more to maintan your value.\n");
	
	return 0;
}
