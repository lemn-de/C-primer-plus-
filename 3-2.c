#include<stdio.h>
int main(void)
{
	int ch=0;
	
	printf("Enter an ASCII code:  ");
	scanf_s("%d",&ch);
	
	getchar();   //ɾ�����뻺�����Ļس��� 
	
	printf("the value of ascii: %d\n",ch);
	printf("the charter:%c\n",ch);
	
	return;
 } 
