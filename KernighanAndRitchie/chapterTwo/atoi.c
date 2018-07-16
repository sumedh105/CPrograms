#include <stdio.h>
#define MAXCHARS 1000

int main()
{
	char arr[MAXCHARS];
	int index = 0;
	int c = 0;
	int result = 0;

	for (index = 0; index < MAXCHARS; index++) {
		arr[index] = 0;
	}//end of for loop

	printf("\nEnter the ascii numbers in the character array\n");
	scanf("%s", arr);
	printf("\nThe entered string is: %s\n", arr);

	for (index = 0; ((arr[index] >= '0') && (arr[index] <= '9')); index++) {
		result = (10 * result) + (arr[index] - '0');
	}//end of for loop
	
	printf("\nThe result obtained is: %d\n", result);
}//end of main function
