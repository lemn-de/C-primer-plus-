#include<stdio.h>
int main(void)
{
	float cups,pints,ounces,big_spoons,tea_spoons;
	
	printf("请输入杯数："); 
	scanf("%f",&cups);
	pints=cups/2;
	ounces=cups*8;
	big_spoons=ounces*2;
	tea_spoons=big_spoons*3;
	printf("转化后为%f品脱，%f盎司，%f汤勺，%f茶勺",pints,ounces,big_spoons,tea_spoons);
	
	return 0;
}
