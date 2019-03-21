#include<stdio.h>
int main(void)
{
	float num;
	
	printf("ÇëÊäÈë¸¡µãÊı: ");
	scanf("%f",&num);
	
	printf("a.%.1f,",num);
	printf("%1.1e\n",num);
	printf("b.%+.3f,",num);
	printf("%1.3E\n",num);
	
	return 0;
	
 } 
