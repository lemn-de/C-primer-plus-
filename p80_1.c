#include<stdio.h>
#include<math.h>
int main(void)
{
	float r = 0.07;
	float p;
	int n = 10;
	
	p = pow (1 + r, n);

	printf("%d ������������ֵ������%%%f\n",n,p*100);
	
	return 0;
 } 
