#include<stdio.h>
#include<math.h>
int main()
{
	int upper = 0;
	int lower = 0;
	
	printf ("please input the upper:");//表格上限 
	scanf ("%d", &upper);
	printf ("please input the lower:");//表格下限 
	scanf ("%d", &lower);
	
	printf ("%10s%10s%10s\n", "number", "square", "cube");
	
	for (int i = 0; i < (upper - lower + 1); i++)
	{
		int number = lower + i;
		int square = pow (number, 2);
		int cube = pow (number, 3);
		
		printf ("%10d%10d%10d\n", number, square, cube);
	}
	
	return 0;
 } 
