#include<stdio.h>
int main(void)
{
	char zimu[26];		//����26��Сд��ĸ������ 
	zimu[0] = 'a';
	int i;
	for (i = 1; i < 26; i++)
	{
		zimu[i] = 'a' + i;		//��26��Сд��ĸ������� 
		
	}
	for (i = 0; i < 26; i++)
	{
		printf ("%c",zimu[i]);		//��ӡ������������ 
	}
	printf ("\n");
		
	
	return 0;
	
}
