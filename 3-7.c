#include<stdio.h>
int main(void)
{
	float height_in_inch,height_in_cm;
	
	printf("������Ϊ    Ӣ��\b\b\b\b");
	scanf("%f",&height_in_inch);
	height_in_cm=height_in_inch*2.54;
	printf("������ת��Ϊ����Ϊ%f����",height_in_cm);
	
	return 0;
	
	 
}
