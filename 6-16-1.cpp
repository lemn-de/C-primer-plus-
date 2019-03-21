#include<stdio.h>
int main(void)
{
	char zimu[26];		//储存26个小写字母的数组 
	zimu[0] = 'a';
	int i;
	for (i = 1; i < 26; i++)
	{
		zimu[i] = 'a' + i;		//将26个小写字母存进数组 
		
	}
	for (i = 0; i < 26; i++)
	{
		printf ("%c",zimu[i]);		//打印数组所有内容 
	}
	printf ("\n");
		
	
	return 0;
	
}
