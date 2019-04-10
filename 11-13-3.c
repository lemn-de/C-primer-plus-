#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define SIZE 20
char *getword(char *target);

int main()
{
	char input[SIZE];
	printf("Enter the word:");
	getword(input);
	printf("the word you entered is:%\n");
	puts(input);

	return 0;
}
char *getword(char *target)
{
	char ch;
	bool inword = false;
	while((ch = getchar()) != '\n')
	{
		if(isspace(ch))
		{
			if(inword)
				break;
			else
				continue;
		}
		
		inword = true;
		
		*(target++) = ch;
	}
	if(ch != '\n')
		while((ch = getchar()) != '\n')
		continue;
	
	return target;
}
