#include<stdio.h>
int main(void)
{
	char fname[40];
	char lname[40];
	int first_name_length = 0;
	int last_name_length = 0;
	
	printf("Enter your first name: ");
	scanf("%s",fname);
	printf("Enter your last name: ");
	scanf("%s",lname);
	
	first_name_length=strlen(fname);
	last_name_length=strlen(lname);
	
	printf("a.%s,%s\n",fname,lname);
	printf("b.\"%20s,%20s\"\n",fname,lname);
	printf("c.\"%-20s,%-20s\"\n",fname,lname);
	printf("d.%*s,%*s\n",first_name_length+3,fname,last_name_length+3,lname);
	
	return 0; 
}
