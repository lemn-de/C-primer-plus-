#include<stdio.h>
int main(void)
{
	int k, i;
	
	
	for (k = 0; k < 6; k++)
	{
		char ch = 'F';			//ѭ����ʼ��������ÿ����λ���'F' 
		for (i = 0; i < k + 1; i++)
		{
			printf ("%c", ch--);
		}
		
		printf("\n");
	}
	
	return 0;
 } 
