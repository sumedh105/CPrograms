#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000

int strNCmp(char *, char *, int);

int main()
{
	char strOne[MAXSIZE];
	char strTwo[MAXSIZE];
	int n;
	int value;

	printf("\nEnter the two strings\n");
	scanf("%s", strOne);
	scanf("%s", strTwo);
	printf("\nThe string entered is: %s\n", strTwo);

	printf("\nEnter the number of characters that needs to be compared\n");
	scanf("%d", &n);
	printf("\nThe number of characters that needs to be concatenated are: %d\n", n);

	value = strNCmp(strOne, strTwo, n);

	if (value < 0) {
		printf("\nThe strings are not equal and strOne is lexicographically less than strTwo\n");
	}//end of if condition

	else if (value > 0) {
		printf("\nThe strings are not equal and strOne is lexicographically greater than strTwo\n");
	}//end of else if condition

	else if (value == 0) {
		printf("\nComparison successful\n");	
	}//end of else if codnition

	return 0;
}//end of if condition

int strNCmp(char *strOne, char *strTwo, int n) {
	int index = 0;
	int count = 0;

	if ((n > 1000) || (n < 0)) {
		exit(0);
	}//end of if condition

	else {
		while (index < n) {
			if (*strOne == *strTwo) {
				++count;

				if (count == n) {
					return 0;
				}//end of if condition
			}//end of if condition

			else {
				return (*strOne - *strTwo);
			}//end of else condition

			++index;
		}//end of while loop
	}//end of else condition
}//end of strNCmp() function
