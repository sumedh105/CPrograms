#include <stdio.h>
#define MAXSIZE 1000

void strCopy(char *, char *);

int main()
{
	char strOne[MAXSIZE];

	strCopy(strOne, "Hello, I am Sumedh W. Jambekar from Gulbarga");

	printf("\nThe string that is copied from strTwo to strOne is: %s\n", strOne);

	return 0;
}//end of main function

void strCopy(char *strOne, char *strTwo) {

	while ((*strOne++ = *strTwo++) != '\0') {
		;
	}//end of while loop
}//end of strCopy function
