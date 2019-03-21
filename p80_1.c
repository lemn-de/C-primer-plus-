#include<stdio.h>
#include<math.h>
int main(void)
{
	float r = 0.07;
	float p;
	int n = 10;
	
	p = pow (1 + r, n);

	printf("%d 年后国民生产总值后增长%%%f\n",n,p*100);
	
	return 0;
 } 
