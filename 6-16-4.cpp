#include<stdio.h>
int main(void)
{
	int k, i = 0, j = 0;

	
	for (k = 0; k < 6; k++)		//���ѭ�������� 
	{
		char ch = 'A' + j;		//ÿ����λ����һ��ĩβ��ĸ 
		for (i = 0; i < k + 1; i++)
		{
			j++;			//j��Ϊ������ 
			printf ("%c", ch++);
		}
		printf ("\n");
	}
	
	return 0;
 } 
