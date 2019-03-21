#include<stdio.h>
#include<float.h>
int main(void)
{
	double d_value = 1.0/3.0;
	float f_value = 1.0/3.0;
	
	printf("the value of double:\n");
	printf("%20.6f %20.12f %20.16f\n",d_value,d_value,d_value);
	printf("the value of float:\n");
	printf("%20.6f %20.12f %20.16f\n",f_value,f_value,f_value);
	printf("the value of FLT_DIG: %d\nthe value of DBL_DIG: %d\n",FLT_DIG,DBL_DIG);
	
	return 0;
}
