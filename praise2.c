#include<stdio.h>
#include<string.h>     //�ṩstrlen()������ԭ�� 
#define PRAISE"You are an extraordinary being."
int main(void)
{
	char name[40];
	
	printf("What's your name?");
	scanf("%s",name);
	printf("Hello, %s. %s\n",name,PRAISE);
	printf("Your name of %u letters occupies %u memory cells.\n",
			strlen(name),sizeof name);
	printf("The praise of praise has %u letters ",
			strlen(PRAISE));
	printf("and occupies %u memory ceels.\n",sizeof PRAISE);
	
	return 0;
 } 
