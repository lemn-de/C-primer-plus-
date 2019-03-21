#include<stdio.h>
int main(void)
{
	int k, i;
	
	for (k = 0; k < 5; k++)		//控制输出5行 
	{
		for (i = 0; i < k +1; i++)		//控制输出5列，每列加一个$符号 
		{
			printf ("$");
		}
	printf ("\n");		//每输出一行后换行 
	
	}
		
	return 0;
 } 
