#include<stdio.h>
int main(void)
{
	int ch=0;
	
	printf("Enter an ASCII code:  ");
	scanf_s("%d",&ch);
	
	getchar();   //删除输入缓冲区的回车键 
	
	printf("the value of ascii: %d\n",ch);
	printf("the charter:%c\n",ch);
	
	return;
 } 
