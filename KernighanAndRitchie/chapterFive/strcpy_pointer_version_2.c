#include <stdio.h>
#include <stdlib.h>

void strCopy(char *, char *);

int main()
{
	char *strOne;
	char *strTwo = "Hello, I am Sumedh W. Jambekar";

	strOne = malloc(1000);

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
