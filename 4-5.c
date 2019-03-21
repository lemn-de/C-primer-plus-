//输入下载速度和文件大小，计算下载时间 
#include<stdio.h>
int main(void)
{
	float network_speed,file_size,download_time;
	
	printf("你的下载速度为：");
	scanf("%f",&network_speed);
	printf("文件大小为：");
	scanf("%f",&file_size);
	
	download_time=file_size/(network_speed/8);
	
	printf("At %.2f megabits per second, a file of %.2f megabytes\n downloads in %.2f second.\n",network_speed,file_size,download_time);
	
	return 0; 
 } 
