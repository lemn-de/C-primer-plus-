#include<stdio.h>
int main(void)
{
	int age;
	double age_s;
	printf("请输入年龄： ");
	scanf("%d",&age);
	age_s=age*3.156e7;
	printf("你已经活了 %le 秒",age_s);
	
	return 0;
}
