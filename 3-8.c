#include<stdio.h>
int main(void)
{
	float cups,pints,ounces,big_spoons,tea_spoons;
	
	printf("�����뱭����"); 
	scanf("%f",&cups);
	pints=cups/2;
	ounces=cups*8;
	big_spoons=ounces*2;
	tea_spoons=big_spoons*3;
	printf("ת����Ϊ%fƷ�ѣ�%f��˾��%f���ף�%f����",pints,ounces,big_spoons,tea_spoons);
	
	return 0;
}
