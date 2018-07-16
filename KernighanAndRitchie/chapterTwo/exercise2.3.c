#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAXCHARS 1000

int main()
{
	char arr[MAXCHARS];
	int index = 0;
	int strLength = 0;
	int result = 0;
	int length = 0;

	for (index = 0; index < MAXCHARS; ++index) {
		arr[index] = 0;
	}//end of for loop

	printf("\nEnter the hexadecimal number\n");
	scanf("%s", arr);
	printf("\nThe entered hexadecimal string is: %s\n", arr);

	index = 0;
	while (arr[index] != '\0') {
		++strLength;
		++index;
	}//end of while loop
	printf("\nString Length is: %d\n", strLength);

	index = 0;
	length = strLength - 1;

	printf("\nLength is: %d\n", length);
	while (arr[index] != '\0') {
		if ((arr[index] == 'a') || (arr[index] == 'A')) {
			result = result + pow (16, length) * 10;
		}//end of if condition

		else if ((arr[index] == 'b') || (arr[index] == 'B')) {
			result = result + pow (16, length) * 11;
		}//end of else if condition

		else if ((arr[index] == 'c') || (arr[index] == 'C')) {
			result = result + pow (16, length) * 12;
		}//end of else if condition

		else if ((arr[index] == 'd') || (arr[index] == 'D')) {
			result = result + pow (16, length) * 13;
		}//end of else if condition
			
		else if ((arr[index] == 'e') || (arr[index] == 'E')) {
			result = result + pow (16, length) * 14;
		}//end of else if condition

		else if ((arr[index] == 'f') || (arr[index] == 'F')) {
			result = result + pow (16, length) * 15;
		}//end of else if condition
		
		else {
			result = result + (pow(16, (int)length) * (arr[index] - '0'));
		}//end of else condition

		++index;
		--length;
	}//end of while loop

	printf("\nThe integer obtained from the hexadecimal number is: %d\n", result);

	return 0;
}//end of main function
