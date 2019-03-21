#include<stdio.h>
int main(void)
{
	float height_in_inch,height_in_cm;
	
	printf("你的身高为    英尺\b\b\b\b");
	scanf("%f",&height_in_inch);
	height_in_cm=height_in_inch*2.54;
	printf("你的身高转化为厘米为%f厘米",height_in_cm);
	
	return 0;
	
	 
}
