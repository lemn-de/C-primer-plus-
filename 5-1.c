#include<stdio.h>
int main(void)
{
	const int minute_per_hour = 60;
	int minutes,hours,mins;
	
	printf("请输入时间（分钟）： ");
	scanf("%d",&minutes);
	
	while(minutes > 0)
	{
		
		hours = minutes / minute_per_hour;
		mins = minutes % minute_per_hour;
		
		printf("%d minutes = %d hours, %d minutes\n",minutes,hours,mins);
		printf("Enter next minutes calue (0 to quit): ");
		scanf("%d",&minutes);
	
	}
	printf("结束\n");
	
	return 0;
 } 
