#include <stdio.h>
const float CM_PER_INCH = 2.54f;                             //1Ó¢´ç=2.54ÀåÃ× 
const float CM_PER_FEET = 30.48f;                            //1Ó¢³ß=30.48ÀåÃ× 
int main(void)

{
	float height_cm,height_inch;
	int height_feet;
	
	printf("Enter a height in centimeters£» ");
	scanf("%f",&height_cm);
	
	while (height_cm > 0){
		height_feet = (int)(height_cm / CM_PER_FEET);
		height_inch = (height_cm - CM_PER_FEET * height_feet) / CM_PER_INCH;
		printf("%.1f cm = %d feet, %.1f inches\n",height_cm,height_feet,height_inch);
		
		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%f",&height_cm);
	}
	printf("bye\n");
	return 0;
}
