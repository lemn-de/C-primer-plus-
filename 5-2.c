#include<stdio.h>
int main(void)
{
	int num,i;
	
	printf("请输入一个整数: ");
	scanf("%d",&num);
	
	for(i=0;i<=10;i++,num++)  //for循环试用 
	printf("%d\n",num);

	return 0;
}
