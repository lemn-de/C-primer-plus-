#include<stdio.h>
int main(void)
{
	char ch;

	printf ("please input a letter:");		//������ĸ���Ƴ��� 
	scanf ("%c", &ch);
	
	int length = ch - 'A' + 1;
	for (int i = 0; i < length; i++)			//��ѭ����������ϰ벿�� 
	{
		char temp = 'A' - 1;
		for (int j = 0; j < (ch - 'A' - i); j++)
		{
			printf (" "); 
		}
		for (int j = 0; j <= i; j++)			//������ϲ��� 
		{
			printf ("%c", ++temp);
		}
		for (int j = 0; j < i; j++)				//������ϲ��� 
		{
			printf ("%c", --temp);
		}
		printf ("\n");
	}
	for (int i = 0; i < length; i++)			//��ѭ����������°벿�� 
	{
		char temp = 'A' - 1;
		for (int k = 0; k < i + 1; k++)
		{
			printf (" ");
		}
		for (int k = 0; k < length - i - 1; k++)		//������²��� 
		{
			printf ("%c", ++temp);
		}
		for (int k = 0; k < length - i - 2; k++)		//������²��� 
		{
			printf ("%c", --temp);
		}
		printf ("\n");
	}
	
	
	return 0;
 } 
