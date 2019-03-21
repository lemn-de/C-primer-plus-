#include<stdio.h>
int main(void)
{
	char ch;

	printf ("please input a letter:");		//输入字母控制长度 
	scanf ("%c", &ch);
	
	int length = ch - 'A' + 1;
	for (int i = 0; i < length; i++)			//此循环控制输出上半部分 
	{
		char temp = 'A' - 1;
		for (int j = 0; j < (ch - 'A' - i); j++)
		{
			printf (" "); 
		}
		for (int j = 0; j <= i; j++)			//输出左上部分 
		{
			printf ("%c", ++temp);
		}
		for (int j = 0; j < i; j++)				//输出右上部分 
		{
			printf ("%c", --temp);
		}
		printf ("\n");
	}
	for (int i = 0; i < length; i++)			//此循环控制输出下半部分 
	{
		char temp = 'A' - 1;
		for (int k = 0; k < i + 1; k++)
		{
			printf (" ");
		}
		for (int k = 0; k < length - i - 1; k++)		//输出左下部分 
		{
			printf ("%c", ++temp);
		}
		for (int k = 0; k < length - i - 2; k++)		//输出右下部分 
		{
			printf ("%c", --temp);
		}
		printf ("\n");
	}
	
	
	return 0;
 } 
