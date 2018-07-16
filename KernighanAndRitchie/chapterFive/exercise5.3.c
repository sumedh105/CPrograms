#include <stdio.h>
#define MAXSIZE 1000

void strConcatenate(char *, char *);

int main()
{
	char strOne[MAXSIZE];
	char strTwo[MAXSIZE];

	printf("\nEnter the two strings\n");
	scanf("%s", strOne);
	scanf("%s", strTwo);
	printf("The two strings that are entered are %s and %s\n", strOne, strTwo);

	strConcatenate(strOne, strTwo);

	printf("\nThe concatenated string is: %s\n", strOne);

	return 0;
}//end of main function

void strConcatenate(char *strOne, char *strTwo) {

	while (*strOne != '\0') {
		strOne++;
	}//end of while loop

	while (*strOne++ = *strTwo++) {
		/* Do nothing */
		;	
	}//end of while loop
}//end of strConcatenate() function
