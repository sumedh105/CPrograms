#include <stdio.h>
#define MAXNUMBERS 500

int main()
{
	int num = 0;
	int index = 0;
	int arr[MAXNUMBERS] = {0};

	printf("\nEnter the number of numbers to be printed\n");
	scanf("%d", &num);
	printf("\nThe number of numbers that needs to be printed are: %d\n", num);

	printf("\nEnter the numbers in an array\n");
	for (index = 0; index < MAXNUMBERS; ++index) {
		arr[index] = index;
	}//end of for loop

	printf("\nThe numbers in an array are:\n");
	for (index = 0; index < num; ++index) {
		printf("\narr[index]: %d\n", arr[index]);
	}//end of for loop

	for (index = 0; index < num; ++index) {
		printf("%6d%c", arr[index], (index %10 == 9 || index == 9) ? '\n' : ' ');	
	}//end of for loop

	return 0;
}//end of main function
