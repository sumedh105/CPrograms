#include <stdio.h>
#define MAXSIZE 1000

int strCompare();

int main()
{
	char strOne[MAXSIZE];
	char strTwo[MAXSIZE];
	int result;

	printf("\nEnter the two strings that needs to be compared\n");
	scanf("%s", strOne);
	scanf("%s", strTwo);
	printf("\nThe strings entered are: %s and %s\n", strOne, strTwo);

	result = strCompare(strOne, strTwo);

	if (result < 0) {
		printf("The strings are not equal and strOne is less than strTwo");
	}//end of if condition

	else if (result == 0) {
		printf("The strings strOne and strTwo match\n");
	}//end of else if condition

	else if (result > 0) {
		printf("\nThe strings are not equal and strOne is greater than strTwo\n");
	}//end of else if condition

	return 0;
}//end of main function

int strCompare(char *strOne, char *strTwo) {
	int index = 0;

	while (*strOne == *strTwo) {
		strOne++; 
		strTwo++;

		if (*strOne == '\0') {
			return 0;
		}//end of if condition
	}//end of while loop

	return (*strOne - *strTwo);	

}//end of strCompare() function
