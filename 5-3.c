#include <stdio.h>
#define DAYS_PER_WEEK 7       //һ��7�� 
int main(void)

{
	int days,weeks,left;
	
	printf("����������(<=0����): \n");
	scanf("%d",&days);

	while(days > 0)
	{
		weeks=days/DAYS_PER_WEEK;
	    left=days%DAYS_PER_WEEK;
     	printf("%d days are %d weeks, %d days.\n",days,weeks,left);
     	printf("������һ��ֵ(<=0����): \n");
     	scanf("%d",&days);
    }
    printf("Done!\n");
	return 0;
 } 
