//���������ٶȺ��ļ���С����������ʱ�� 
#include<stdio.h>
int main(void)
{
	float network_speed,file_size,download_time;
	
	printf("��������ٶ�Ϊ��");
	scanf("%f",&network_speed);
	printf("�ļ���СΪ��");
	scanf("%f",&file_size);
	
	download_time=file_size/(network_speed/8);
	
	printf("At %.2f megabits per second, a file of %.2f megabytes\n downloads in %.2f second.\n",network_speed,file_size,download_time);
	
	return 0; 
 } 
