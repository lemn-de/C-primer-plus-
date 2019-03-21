#include <stdio.h>

int main(void)
{
	int count, sum;
	count = 0;
	sum = 0;
	
	printf("ÇëÊäÈëÌìÊı£º");
	scanf("%d",&count);
	getchar();
	
	do
	{
		sum += count * count;
	} while (count-- > 0);
	
	printf("sum = %d\n",sum);
	
	return 0;
}
