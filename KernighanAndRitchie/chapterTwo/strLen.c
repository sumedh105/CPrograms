#include <stdio.h>
#define MAXCHARS 500

int main()
{
	int index = 0, length = 0, c = 0;
	char arr[MAXCHARS];

	for (index = 0; index < MAXCHARS; index++) {
		arr[index] = 0;
	}//end of for loop

	index = 0;
	printf("\nEnter a string\n");
	while ((c = getchar()) != EOF) {
		arr[index] = c;
		++index;
	}//end of while loop
	arr[index] = '\0';
	printf("\nThe string entered is: %s\n", arr);
	
	index = 0;
	while (arr[index] != '\0') {
		++length;
		++index;
	}//end of while loop

	printf("\nThe string length is: %d\n", length);

	return 0;
}//end of main function	
