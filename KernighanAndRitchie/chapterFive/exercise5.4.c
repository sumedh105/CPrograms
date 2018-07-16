#include <stdio.h>
#define MAXSIZE 1000

int strend(char *, char *);

int main()
{
	char strOne[MAXSIZE];
	char strTwo[MAXSIZE];
	int value = 0;

	printf("\nEnter the two strings\n");
	scanf("%s", strOne);
	scanf("%s", strTwo);
	printf("\nThe two strings entered are: %s and %s\n", strOne, strTwo);

	value = strend(strOne, strTwo);

	if (value == 1) {
		printf("\nstrTwo occurs at the end of strOne\n");

	}//end of if condition

	else if (value == 0) {
		printf("\nstrTwo does not occur at the end of strOne\n");
	}//end of else if condition	

	return 0;
}//end of main function

int strend(char *strOne, char *strTwo) {
	
	while (*strOne) {

		if (*strOne == *strTwo) {
			strOne++;
			strTwo++;

			if (*strTwo == '\0') {

				if (*strOne == '\0') {
					return 1;
				}//end of inner if condition

				else {
					return 0;
				}//end of else condition
			}//end of inner if condition
		}//end of if condition

		else {
			strOne++;
		}//end of else condition

	}//end of while loop
}//end of strend() function
