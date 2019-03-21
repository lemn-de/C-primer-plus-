#include <stdio.h>
#define DAYS_PER_WEEK 7       //一周7天 
int main(void)

{
	int days,weeks,left;
	
	printf("请输入天数(<=0结束): \n");
	scanf("%d",&days);

	while(days > 0)
	{
		weeks=days/DAYS_PER_WEEK;
	    left=days%DAYS_PER_WEEK;
     	printf("%d days are %d weeks, %d days.\n",days,weeks,left);
     	printf("输入下一个值(<=0结束): \n");
     	scanf("%d",&days);
    }
    printf("Done!\n");
	return 0;
 } 
