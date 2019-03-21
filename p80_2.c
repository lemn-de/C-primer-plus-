#include<stdio.h>
#include<math.h>
int main(void)
{
	float r1, r2, r3, r5, r0, p, p1, p2, p3, p4, p5;
	p = 1000;
	r1 = 0.015;
	r2 = 0.021;
	r3 = 0.0275;
	r5 = 0.03;
	r0 = 0.0035;
	
	p1 = p * (1 + 5 * r5);
	p2 = p * (1 + 2 * r2) * (1 + 3 * r2);
	p3 = p * (1 + 3 * r3) * (1 + 2 * r2);
	p4 = p * (1 + r1) * pow (1 + r1, 5);
	p5 = p * pow (1 + r0/4, 4 * 5);
	
	printf(" p1 = %f\n p2 = %f\n p3 = %f\n p4 = %f\n p5 = %f\n",p1, p2, p3, p4, p5);
	
	return 0;  
	
}
