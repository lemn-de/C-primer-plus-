#include<stdio.h>
#define KM_PER_MILE (1.609)
#define PINT_PER_GALLON (3.785) 
int main(void)
{
	float driven_distance,gas_consumption;
	float pint_per_hundred_km,mile_per_gallon;
	
	printf("How much distence have you used in kilometer: ");  //输入旅行的里程 
	scanf("%f",&driven_distance);
	
	printf("How much gas have you used in pint: ");  //输入消耗的汽油量 
	scanf("%f",&gas_consumption);
	
	pint_per_hundred_km = gas_consumption / driven_distance * 100;
	mile_per_gallon = (driven_distance / KM_PER_MILE) / (gas_consumption / PINT_PER_GALLON);  //把单位是英里/加仑的值转换为升/100公里（欧洲通用的燃料消耗表示法） 
	
	printf("Fuel consumption: %.1f pint/100km or %.1f mile/gallon\n",pint_per_hundred_km,mile_per_gallon);  //计算消耗每加仑汽油行驶的英里数 
	
	return 0;
}
