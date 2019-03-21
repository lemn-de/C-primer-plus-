#include<stdio.h>
int main(void)
{
	int k, i;
	
	
	for (k = 0; k < 6; k++)
	{
		char ch = 'F';			//循环初始化变量，每行首位输出'F' 
		for (i = 0; i < k + 1; i++)
		{
			printf ("%c", ch--);
		}
		
		printf("\n");
	}
	
	return 0;
 } 
