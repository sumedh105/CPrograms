#include <stdio.h>
#define MAXCHARS 1000

int main()
{
	char arr[MAXCHARS];
	int index = 0;

	for (index = 0; index < MAXCHARS; ++index) {
		arr[index] = 0;
	}//end of for loop

	printf("\nEnter the string\n");
	scanf("%s", arr);
	printf("\nThe string entered is: %s\n", arr);
	
	index = 0;
	while (arr[index] != '\0') {
		if ((arr[index] >= 'A') && (arr[index] <= 'Z')) {
			arr[index] = arr[index] + 'a' - 'A';
		}//end of if condition
		++index;
	}//end of while loop	

	printf("\nThe resulting string is: %s\n", arr);

	return 0;
}//end of main function
