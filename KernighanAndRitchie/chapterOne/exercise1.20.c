#include <stdio.h>
#define MAXTABS 25
#define MAXCHARS 1000

int main()
{
	int c = 0, index = 0, indexTwo = 0, indexThree = 0;
	char arr[MAXCHARS], newArr[MAXCHARS];

	for (index = 0; index < MAXCHARS; index++) {
		arr[index] = 0;
		newArr[index] = 0;
	}//end of for loop

	index = 0;
	
	while ((c = getchar()) != EOF) {
		arr[index] = c;
		++index;
	}//end of while loop
	++index;
	arr[index] = '\0';

	printf("\nThe entered string is: %s\n", arr);

	for (index = 0, indexTwo = 0; arr[index] != '\0'; index++) {
		if (arr[index] == '\t') {
			for (indexThree = 0; indexThree < MAXTABS; indexThree++) {
				newArr[indexTwo] = ' ';
				++indexTwo;
			}//end of for loop
		}//end of if condition
		else {
			newArr[indexTwo] = arr[index];
			++indexTwo;
		}//end of else condition
	}//end of for loop
	newArr[indexTwo] = '\0';
	
	printf("\nThe string obtained after adjusting the tabs is: %s\n", newArr);

	return 0;
}//end of main function
