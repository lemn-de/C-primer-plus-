#include<stdio.h>
int main(void)
{
	char name[40];
	float height;
	
	printf("��������ǣ�");
	scanf("%s",&name);
	printf("��������(����)��");  //������Ϊ��λ������� 
	scanf("%f",&height);
	printf("%s, you are %.2f m feet tall\n",name,height/100);  //����Ϊ��λ��� 
	
	return 0; 
}
