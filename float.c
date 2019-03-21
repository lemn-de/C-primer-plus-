//这是一个浮点溢出的试验 
#include<stdio.h>
int main(void)
{
	float toobing=3.4E38*100.0f;
	printf("%e\n", toobing);
	return 0;
}
