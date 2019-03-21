#include<stdio.h>
int main(void)
{
	int k, i = 0, j = 0;

	
	for (k = 0; k < 6; k++)		//外层循环处理行 
	{
		char ch = 'A' + j;		//每行首位接上一行末尾字母 
		for (i = 0; i < k + 1; i++)
		{
			j++;			//j作为计数器 
			printf ("%c", ch++);
		}
		printf ("\n");
	}
	
	return 0;
 } 
