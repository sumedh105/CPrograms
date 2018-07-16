#include <stdio.h>

int main()
{
	int x = 0;
	int count = 0;
	int index = 0;

	printf("\nEnter the integer\n");
	scanf("%d", &x);
	printf("\nThe integer that is entered is: %d\n", x);

	for (index = 0; index < 31; index++) {
		if ((x & 01) == 1) {
			++count;
		}//end of if condition
		x = x >> 1;
	}//end of for loop

	printf("\nThe number of 1 bits present are: %d\n", count);	

	return 0;
}//end of main function
