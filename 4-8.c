#include<stdio.h>
#define KM_PER_MILE (1.609)
#define PINT_PER_GALLON (3.785) 
int main(void)
{
	float driven_distance,gas_consumption;
	float pint_per_hundred_km,mile_per_gallon;
	
	printf("How much distence have you used in kilometer: ");  //�������е���� 
	scanf("%f",&driven_distance);
	
	printf("How much gas have you used in pint: ");  //�������ĵ������� 
	scanf("%f",&gas_consumption);
	
	pint_per_hundred_km = gas_consumption / driven_distance * 100;
	mile_per_gallon = (driven_distance / KM_PER_MILE) / (gas_consumption / PINT_PER_GALLON);  //�ѵ�λ��Ӣ��/���ص�ֵת��Ϊ��/100���ŷ��ͨ�õ�ȼ�����ı�ʾ���� 
	
	printf("Fuel consumption: %.1f pint/100km or %.1f mile/gallon\n",pint_per_hundred_km,mile_per_gallon);  //��������ÿ����������ʻ��Ӣ���� 
	
	return 0;
}
