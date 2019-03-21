#include <stdio.h>
int main(void)
{
	int count, sum;
	
	count = 0;
	sum = 0;
	
	printf("please enter work days:");
	scanf("%d",&count);
	getchar();
	
	do
	{
		sum += count;
	} while (count-- > 0);
	
	printf("sum = %d\n",sum);
	
	return 0;
}

