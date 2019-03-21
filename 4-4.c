#include<stdio.h>
int main(void)
{
	char name[40];
	float height;
	
	printf("你的名字是：");
	scanf("%s",&name);
	printf("你的身高是(厘米)：");  //以厘米为单位输入身高 
	scanf("%f",&height);
	printf("%s, you are %.2f m feet tall\n",name,height/100);  //以米为单位输出 
	
	return 0; 
}
