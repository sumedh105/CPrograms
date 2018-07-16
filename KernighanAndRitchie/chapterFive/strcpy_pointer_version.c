#include <stdio.h>
#define MAXSIZE 1000

void strCopy(char *, char *);

int main()
{
	char strOne[MAXSIZE];
	char strTwo[MAXSIZE];

	printf("\nEnter a string that needs to be copied\n");	
	scanf("%s", strTwo);
	printf("\nThe entered string is: %s\n", strTwo);

	strCopy(strOne, strTwo);

	printf("\nThe string that is copied from strTwo to strOne is: %s\n", strOne);

	return 0;
}//end of main function

void strCopy(char *strOne, char *strTwo) {

	while (*strTwo != '\0') {
		*strOne = *strTwo;
		strOne++;
		strTwo++;
	}//end of while loop
}//end of strCopy function
