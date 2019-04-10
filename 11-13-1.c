#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 20

char * sgetchar(char *array, int n);
int main()
{
	char hello[SIZE] = "Hello, ";
	int space = SIZE - strlen(hello) - 1;

	printf("What's your name? (enter %d characters)\n", space);
	sgetchar(hello + 7, space);
	puts(hello);

	return 0;
}
char * sgetchar(char *array, int n)
{
	char ch;
	int i;
	

	for(i = 0;i < n; i++)
	{
		if((ch = getchar()) == EOF || isspace(ch) || i >= n)
			break;
		
		*(array + i) = ch;
	}
	return array;
} 
